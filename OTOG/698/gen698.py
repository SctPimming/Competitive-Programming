import random
extension = ".in"
prob_id = str(698) + "/"

for case in range(4, 11):
    print(case)
    s = ""
    path = "C:/Users/PC/Desktop/Competitive-Programming/OTOG/" + prob_id + str(case) + extension
    f = open(path, "w", encoding="utf-8")
    t = random.randint(9000, 10000)
    s += (str(t) + "\n")
    for query in range(t):
        val = random.randint(500000, 1000000)
        s += str(val) + "\n"
    #print(s)
    f.write(s) 
    f.close()