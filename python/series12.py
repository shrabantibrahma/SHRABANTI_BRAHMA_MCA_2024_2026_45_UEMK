12. Find the nth term in the sequence 0, 0, 2, 1, 4, 2, 6, 3, 8 ...

def nth_term_sequence(n):
    if n % 2 == 1:
        return (n // 2) * 2
    else:
        return (n // 2) - 1

# Example
n = 5
print(nth_term_sequence(n))  # Output for n = 5
