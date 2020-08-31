import numpy as np
import random

def shifted_sphere(x, d):
    z = x-o;
    f_val = np.sum(z**2)-450.000000
    return f_val

def pso(fobj, bounds, popsz = 100, itr = 1000, w = 0.5, cp = 0.8, cg = 0.9):
    dimension = len(bounds)
    mn, mx = bounds[0]
    swarm = np.random.uniform(mn, mx, [popsz, dimension])
    best_position = np.zeros([popsz, dimension])
    np.copyto(best_position, swarm)
    f_val = np.asarray([fobj(particle, dimension) for particle in swarm])
    best_idx = np.argmin(f_val)
    best = swarm[best_idx]
    velocity = np.random.uniform(-abs(mn-mx), abs(mn-mx), [popsz, dimension])
    for gen in range(itr):
        for idx in range(popsz):
            rp, rg = [random.random() for cnt in range(2)]
            velocity[idx] = (w*velocity[idx]) +  cp*rp*(best_position[idx] - swarm[idx]) + cg*rg*(best - swarm[idx])
            swarm[idx] = (swarm[idx] + velocity[idx])
            if fobj(swarm[idx], dimension) < fobj(best_position[idx], dimension):
                best_position[idx] = swarm[idx]
                if fobj(best_position[idx], dimension) < fobj(best, dimension):
                    best = best_position[idx]
        yield(best, fobj(best, dimension))

fname = "/sphere_func_data.txt"
path = "C:/Users/PC/Downloads/C-windows-17-Mar-05/win/input_data" + fname
arr = np.loadtxt(path)
d = 10
o = arr[:d]
res = list(pso(shifted_sphere, bounds=[(-100, 100)] * d))
print(res[-1])
