11. Find the nth term 3,5,33,35,53,……………………..

def nth_term(n):

  if n == 1:
    return 3

  if n == 2:
    return 5

  if n % 2 == 0:  # Even term
    return nth_term(n - 1) + 2
  else:  # Odd term
    return nth_term(n - 2) * 10 - 2

n = 7
result = nth_term(n)
print(f"The {n}-th term of the sequence is: {result}")