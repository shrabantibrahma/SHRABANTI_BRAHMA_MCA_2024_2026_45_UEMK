
def all_even_digits(number):
    for digit in str(number):
        if int(digit) % 2 != 0:  
            return False
    return True


even_numbers = []
for number in range(1000, 3001):
    if all_even_digits(number):
        even_numbers.append(number)


print("Numbers between 1000 and 3000 with all even digits:")
print(even_numbers)
