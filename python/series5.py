5. 5. 1*3+3*5+………………………………………………….

def series_sum(n):
    total_sum = 0  # Initialize the sum to 0
    for i in range(1, n + 1):
        # Compute the current odd number (2i - 1) and the next odd number (2i + 1)
        total_sum += (2*i - 1) * (2*i + 1)  # Add the product of consecutive odd numbers
    return total_sum

# Example: Compute the sum for n = 4
n = 4
result = series_sum(n)
print(f"The sum of the series for n={n} is: {result}")
