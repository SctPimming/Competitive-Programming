import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation


def fmodel(x, w):
    return w[0] + w[1]*x + w[2] * x**2 + w[3] * x**3 + w[4] * x**4 + w[5] * x**5

def rmse(w):
    y_pred = fmodel(x, w)
    return np.sqrt(sum((y - y_pred)**2) / len(y))

def Shifted_Sphere(x):
    z = x-o;
    f_val = np.sum(z**2)-450;
    return f_val
    


def de(fobj, bounds, mut=0.8, crossp=0.7, popsize=20, its=1000):
    dimensions = len(bounds)
    pop = np.random.rand(popsize, dimensions)
    min_b, max_b = np.asarray(bounds).T
    diff = np.fabs(min_b - max_b)
    pop_denorm = min_b + pop * diff
    fitness = np.asarray([fobj(ind) for ind in pop_denorm])
    # for ind in pop_denorm:
    #     print(ind, fobj(ind))
    best_idx = np.argmin(fitness)
    best = pop_denorm[best_idx]
    for i in range(its):
        for j in range(popsize):
            idxs = [idx for idx in range(popsize) if idx != j]
            a, b, c = pop[np.random.choice(idxs, 3, replace = False)]
            mutant = np.clip(a + mut * (b - c), 0, 1)
            cross_points = np.random.rand(dimensions) < crossp
            if not np.any(cross_points):
                cross_points[np.random.randint(0, dimensions)] = True
            trial = np.where(cross_points, mutant, pop[j])
            trial_denorm = min_b + trial * diff
            f = fobj(trial_denorm)
            if f < fitness[j]:
                fitness[j] = f
                pop[j] = trial
                if f < fitness[best_idx]:
                    best_idx = j
                    best = trial_denorm
        yield best, fitness[best_idx]

# x = np.linspace(0, 10, 500)
# y = np.cos(x) + np.random.normal(0, 0.2, 500)
o = np.random.rand(50);
print(o);
result = list(de(Shifted_Sphere, bounds=[(-100, 100)] * 50, its=10000))
print(result[-1])
# plt.scatter(x, y, c = "#ff851b", s = 50)
# plt.plot(x, fmodel(x, result[-1][0]), label = 'result')
# plt.legend()
# plt.show()
