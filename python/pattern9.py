9.
       *
     *  *
   *      *
 *          *
   *      *
     *   *
       *
def print_pattern(n):
    for i in range(n):
        print(" " * (n - i - 1) * 3, end="")
        
        if i > 0:
            print("*", end="")
            print(" " * (i * 2 - 1), end="")
            print("*")
        else:
            print("*")
    
    for i in range(n - 2, 0, -1):
        print(" " * (n - i - 1) * 3, end="")
        
        if i > 0:
            print("*", end="")
            print(" " * (i * 2 - 1), end="")
            print("*")
        else:
            print("*")

n = 4
print_pattern(n)
