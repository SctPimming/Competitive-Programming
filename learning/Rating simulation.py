import random
import statistics
import matplotlib.pyplot as plt
exp_rating = 1500
avg = 1500
n = 30
sd = 100
history = []
contest_id = []
for i in range(20):
    sd = random.randint(50, 100)
    n = random.randint(30, 50)
    avg = random.randint(1400, 1600)
    history.append(exp_rating)
    contest_id.append(i)
    # print(exp_rating)
    rating = statistics.NormalDist(avg, sd)
    ratings = rating.samples(n)
    for j in range(n):
        ratings[j] = round(ratings[j])
        #print(ratings[i])
    rank = random.randint(, )
    Pa = 1 - rating.cdf(exp_rating)
    Pb = (rank-1)/(n-1)
    dP = Pa - Pb
    dR = 0
    if(dP > 0):
        dR = (dP*100)+25
    elif (dP < 0):
        dR = max((dP*100)-15, -100)
    else:
        dR = (dP*100)+35
    #print(dR)
    exp_rating += dR
    #print(exp_rating)

plt.plot(contest_id, history, marker = 'o', c = "#ff851b")
plt.show()