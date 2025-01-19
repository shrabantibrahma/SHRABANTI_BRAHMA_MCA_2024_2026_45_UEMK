17. Find the nth term in the sequence 0, 6, 0, 12, 0, 90, ...

def sequence_17(n):
    if n % 2 == 1:
        return 0
    else:
        return 6 * (n // 2)

# Example
n = 6
print(sequence_17(n))  # Output for n = 6
