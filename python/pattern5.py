5.
   * 
 * * * 
* * * * * 
def print_pattern(n):
    for i in range(1, n + 1, 2):
        print(" " * ((n - i) // 2), end="")
        print("* " * i)

n = 5
print_pattern(n)

