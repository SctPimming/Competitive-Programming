import numpy as np 
import random
data = np.array([
    [1, 50],
    [2, 53],
    [3, 59],
    [4, 70],
    [5, 75],
    [6, 82],
    [7, 114],
    [8, 147],
    [9, 177],
    [10, 212],
    [11, 272],
    [12, 322],
    [13, 411],
    [14, 599],
    [15, 721],
    [16, 827]
])

#Define constant
row = data.shape[0]
population_size = 10
max_iteration = 10
mutation_rate = 1/4
lower_bound = np.array([-4000, -40000, -40000, 0])
upper_bound = np.array([4000, 40000, 300000, 100])

#init value
population = []
solution = []
best_sse = 1e10

def MMF(A, B, C, D, x):
    y = (A*B + (C*(x**D)))/ (B +(x**D))
    return y
def SSE(chromosome):
    error = 0
    A = chromosome[0]
    B = chromosome[1]
    C = chromosome[2]
    D = chromosome[3]
    prediction = 0
    for i in range(row):
        xval = data[i][0]
        yval = data[i][1]
        prediction = MMF(A, B, C, D, xval)
        error = error + (prediction - yval)**2    
    return error
    

for i in range(population_size):
    A = random.randrange(lower_bound[0], upper_bound[0])
    B = random.randrange(lower_bound[1], upper_bound[1])
    C = random.randrange(lower_bound[2], upper_bound[2])
    D = random.randrange(lower_bound[3], upper_bound[3])
    new_chromosome = np.array([A, B, C, D])
    if (i == 0):
        population = new_chromosome
    else:
        population = np.vstack((population, new_chromosome))

for gen in range(max_iteration):
    fitness = np.zeros(population_size)
    for i in range(population_size):
        fitness[i] = SSE(population[i, :]) 
        if (fitness[i] < best_sse):
            solution = population[i, :]
            best_sse = fitness[i] 
    

