7.
   1
  1   1
 1   2   1
1   3   3   1

def print_pascals_triangle(n):
    triangle = []

    for i in range(n):
        row = [1] * (i + 1)
        
        for j in range(1, i):
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]
    
        triangle.append(row)
    
    for i in range(n):
        print(" " * (n - i - 1), end="")
        print("   ".join(map(str, triangle[i])))

n = 4
print_pascals_triangle(n)
