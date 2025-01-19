9. 1 + 2 + 11 + 26 + 47 + ...

def sequence_sum(n):
    total_sum = 0
    for i in range(n):
        total_sum += i ** 2 + i
    return total_sum

# Example
n = 5
print(sequence_sum(n))  # Output for n = 5
