2.

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

def generate_pattern(rows):

    for i in range(1, rows + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()
        
generate_pattern(5)
