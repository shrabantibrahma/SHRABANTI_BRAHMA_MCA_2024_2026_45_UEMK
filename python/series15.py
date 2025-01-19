15. Find the nth term 1,8,54,384,…………………………..

def nth_term(n):

  if n == 1:
    return 1
  else:
    return 8 * nth_term(n - 1)

n = 5  # Find the 5th term
result = nth_term(n)
print(f"The {n}-th term of the sequence is: {result}")