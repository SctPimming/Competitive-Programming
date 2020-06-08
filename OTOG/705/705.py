import random
extension = ".in"
mx = 1000;
mn = 10;
verdict = ["AC", "WA", "TLE"]
for tc in range(1, 11):
    path = "C:/Users/PC/Desktop/Competitive-Programming/OTOG/705/" + str(tc) + extension
    f = open(path, "w", encoding="utf-8")
    q = random.randint(1, mx)
    s = str(q) + "\n"
    for user in range(q):
        time = mn;
        n = random.randint(1, mx)
        s += str(n) + "\n"
        for submit in range(n-1):
            res = random.randint(0, 2)
            time += random.randint(0, 10)
            s += verdict[res] + " " + str(time) + "\n"
        time += random.randint(0, 10)
        s += "AC" + " " + str(time) + "\n"
    #print(s)
    f.write(s) 
    f.close()