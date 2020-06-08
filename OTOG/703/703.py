import random
extension = ".in"
mxn = 200000;
mnn = 100000; 
print(mxn)
for i in range(4, 11):
    print(i)
    s = ""
    binary_string = ""
    path = "C:/Users/PC/Desktop/Competitive-Programming/OTOG/703/" + str(i) + extension
    f = open(path, "w", encoding="utf-8")
    n = random.randint(mnn, mxn)
    for j in range(n):
        test = random.random()
        if test > 0.5:
            binary_string += "1"
        else:
            binary_string += "0"
    s += str(n) + "\n" + binary_string;
    # print(s)
    f.write(s) 
    f.close()