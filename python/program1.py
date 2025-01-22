
num = int(input("Enter a 4-digit number: "))
even_digits = []
odd_digits = []
even_count = 0
odd_count = 0
for digit in str(num):
    if int(digit) % 2 == 0:
        even_digits.append(digit)
        even_count += 1
    else:
        odd_digits.append(digit)
        odd_count += 1
print("Even digits:", even_digits)
print("Odd digits:", odd_digits)
print("Total even digits:", even_count)
print("Total odd digits:", odd_count)
