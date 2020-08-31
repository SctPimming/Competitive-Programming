import numpy as np

with open("test.txt", "w") as f:
    n = np.asarray([200000])
    np.savetxt(f, n, fmt = "%d")
    for i in range (int(n)):
        val = np.random.randint(1000, 10000, 1)
        print(i)
        np.savetxt(f, val, fmt = "%d")

        