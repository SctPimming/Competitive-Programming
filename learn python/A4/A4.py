import numpy as np
bound_mn, bound_mx = [-10000, 10000]
for tc in range(4, 8):
    n = np.random.randint(1000, 5000, 1)
    with open(f"{tc}.in", 'w') as f:
        np.savetxt(f, n, fmt = "%d")
        point = np.random.randint(bound_mn, bound_mx,(int(n), 2))
        np.savetxt(f, point, fmt = "%d") 