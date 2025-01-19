10. Find the nth term 2,4,3,4,15,…………………………

def find_nth_term(n):
    # Pattern: 2, 4, 3, 4, 15, ...
    if n % 2 == 1:  # Odd position
        return n + 1
    else:           # Even position
        return n * n

# Example usage:
nth = int(input("Enter the term number (n): "))
print("The nth term is:", find_nth_term(nth))
