8. 1 - x^2/2! + x^4/4! + ...

import math

def series_sum(x, n):
    total_sum = 0
    for i in range(n + 1):
        total_sum += ((-1) ** i) * (x ** (2 * i)) / math.factorial(2 * i)
    return total_sum

# Example
x = 2
n = 5
print(series_sum(x, n))  # Output for x = 2 and n = 5
