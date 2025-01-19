7. 1 - 1/2 + 1/3 - 1/4 + ...

def alternating_series(n):
    total_sum = 0
    for i in range(1, n+1):
        if i % 2 == 0:
            total_sum -= 1 / i
        else:
            total_sum += 1 / i
    return total_sum

# Example
n = 5
print(alternating_series(n))  # Output for n = 5
