import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation

def shifted_sphere(x, d):
    z = x-o;
    f_val = np.sum(z**2)-450.000000
    return f_val

def shifted_rosenbrock(x, d):
    f_val = 0
    z = (x - o) + 1
    for i in range(d-1):
        f_val += (100*(z[i]**2 - z[i+1]))**2 + (z[i] - 1)**2
    return f_val + 390

def DE(fobj, bounds, mut = 0.8, crossp = 0.7, popsz = 20, itr = 1000):
    dim = len(bounds)
    population = np.random.rand(popsz, dim)
    mn, mx = bounds[0]
    denorm_population = mn + population * (mx - mn)
    fitness = np.asarray([fobj(x, dim) for x in population])
    best_idx = np.argmin(fitness)
    best = population[best_idx]
    for gen in range(itr):
        for i in range(popsz):
            pool = [idx for idx in range(popsz) if idx != i]
            idx_pool = np.random.choice(pool, 3)
            a, b, c = [population[idx] for idx in idx_pool]
            mutant = np.clip(a + mut *(b-c), 0, 1)
            cross_points = np.random.rand(dim) < crossp
            if not np.any(cross_points):
                cross_points[np.random.randint(0, dim)] = True
            trial = np.where(cross_points, mutant, population[i])
            trial_denorm = mn + trial * (mx - mn)
            f = fobj(trial_denorm, dim)
            if f < fitness[i]:
                fitness[i] = f
                population[i] = trial
                if f < fitness[best_idx]:
                    best_idx = i
                    best = trial_denorm
        yield best, fitness[best_idx]

fname = "/sphere_func_data.txt"
path = "C:/Users/PC/Downloads/C-windows-17-Mar-05/win/input_data" + fname
arr = np.loadtxt(path)
d = 10
o = arr[:d]
result = list(DE(shifted_sphere, bounds=[(-100, 100)] * d))
print(result[-1])
