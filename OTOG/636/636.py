import random
extension = ".in"
mq = 100000;
mn = 1000;
for tc in range(1, 11):
    path = "C:/Users/PC/Desktop/Competitive-Programming/OTOG/636/" + str(tc) + extension
    f = open(path, "w", encoding="utf-8")
    q = random.randint(1, mq)
    s = str(q) + "\n"
    for user in range(q):
        n = random.randint(1, mn);
        m = random.randint(n, mn);
        s += str(n) + " " +  str(m) +  "\n"
    #print(s)
    f.write(s) 
    f.close()