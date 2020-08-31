import numpy as np
for tc in range (1, 7):
    n = int(np.random.randint(2000, 5000, 1))
    with open(f"{tc}.in", "w") as f:
        q = []
        sum = 0
        op = 0
        for i in range(1000):
            val = int(np.random.choice(range(100, int(n/19))))
            q.append(val)
            sum += val
            op = val*val
            if sum >= n:
                break
        # print(q)
        print(sum, len(q))
        print(op)
        query = np.asarray([len(q)])
        np.savetxt(f, query, fmt = "%d")
        q = np.asarray(q)
        np.savetxt(f, q, fmt = "%d")

    