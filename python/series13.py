13. Find the nth term in the sequence 14, 28, 20, 40, ...

def sequence_13(n):
    if n % 2 == 1:
        return 14 * (n // 2 + 1)
    else:
        return 28 * (n // 2)

# Example
n = 4
print(sequence_13(n))  # Output for n = 4
