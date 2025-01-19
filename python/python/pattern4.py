4.

   *
  **
 ***
****

def print_pyramid(rows):
    
  for i in range(1, rows + 1):
    print(' ' * (rows - i), end='') 
    print('*' * i) 

print_pyramid(4)
