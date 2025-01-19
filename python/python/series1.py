1. 11+2!+3!+…………….+n!

import math

def series_sum(n):
    total_sum = 11
    for i in range(2, n + 1):
        total_sum += math.factorial(i)
    return total_sum

n = 5
result = series_sum(n)
print(f"The sum of the series for n={n} is: {result}")
