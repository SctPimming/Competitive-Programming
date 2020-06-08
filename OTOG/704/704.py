import random
extension = ".in"
mxn = 200000
for tc in range(4, 11):
    path = "C:/Users/PC/Desktop/Competitive-Programming/OTOG/704/" + str(tc) + extension
    f = open(path, "w", encoding="utf-8")
    n = random.randint(100000, mxn)
    s = str(n) + "\n"
    total = 0
    for peak in range(n):
        u = random.randint(1, 100)
        d = random.randint(1, 100)
        total += u+d
        s += str(u) + " " + str(d) + "\n"
    t = random.randint(100000, mxn)
    s += str(t) + "\n"
    for trip in range(t):
        dist = random.randint(1, total)
        s += str(dist) + "\n"
    #print(s)
    f.write(s) 
    f.close()