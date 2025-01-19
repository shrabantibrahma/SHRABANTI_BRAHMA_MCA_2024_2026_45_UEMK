8.
      *
    *   *
  *   *   *
*   *   *   *
  *   *   *
    *   *
      *

def print_pattern(n):
    for i in range(1, n + 1):
        print(" " * (n - i) * 2, end="")
        
        for j in range(i):
            print("*", end="   " if j < i - 1 else "")
        print()
    
    for i in range(n - 1, 0, -1):
        print(" " * (n - i) * 2, end="")
        
        for j in range(i):
            print("*", end="   " if j < i - 1 else "")
        print()
n = 4
print_pattern(n)
