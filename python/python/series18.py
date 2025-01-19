18. Find the nth term in the sequence a, b, b, c, c, c, ...

import string

def nth_term_sequence_18(n):
    letter = string.ascii_lowercase[(n - 1) // 2]
    return letter

# Example
n = 5
print(nth_term_sequence_18(n))  # Output for n = 5
