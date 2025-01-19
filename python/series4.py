4. 4. 1+x+x^2+x^3+……………………………………+x^n

def series_sum(x, n):
    total_sum = 0  # Initialize the sum to 0
    for i in range(n + 1):
        total_sum += x ** i  # Add the term x^i
    return total_sum

# Example: Compute the sum for x = 2 and n = 5
x = 2
n = 5
result = series_sum(x, n)
print(f"The sum of the series for x={x} and n={n} is: {result}")
