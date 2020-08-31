def fval(x):
    return x**3 - x**2 - x + 1
a = -1.2
b = -0.9
n = 0
while n <= 14:
    c = (a + b)/2
    print(f'n = {n}:')
    print(f'search in range: [ {a}, {b} ]')
    print(f'c = {c} and f(c) = {fval(c)}')
    product = fval(a) * fval(c)
    if product < 0:
        b = c
    elif product > 0:
        a = c
    else :
        print(f'find solution! r = {c}')
        break
    n = n + 1