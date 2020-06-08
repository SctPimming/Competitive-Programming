import random
extension = ".in"
prime = [2,3,5,7,11,13,17,19]
pick = [0] * 8
for i in range(1, 4):
    print(i)
    s = ""
    line1 = ""
    line2 = ""
    path = "C:/Users/PC/Desktop/Competitive-Programming/OTOG/697/" + str(i) + extension
    f = open(path, "w", encoding="utf-8")
    n = 8
    b = random.randint(1, 1000)
    a = random.randint(1, b)
    s += (str(a) + " " + str(b) + "\n")
    for j in range(n):
        p = prime[j]
        r = random.randint(0, p-1)
        line1 += (str(p) + " ")
        line2 += (str(r) + " ")
    s += line1 + "\n" + line2
    #print(s)
    f.write(s) 
    f.close()