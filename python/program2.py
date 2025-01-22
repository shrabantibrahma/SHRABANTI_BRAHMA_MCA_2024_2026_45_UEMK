
num = input("Enter a 10-digit number: ")
digit_count = {}
for digit in num:
    if digit in digit_count:
        digit_count[digit] += 1
    else:
        digit_count[digit] = 1
max_digit = max(digit_count, key=digit_count.get)
max_count = digit_count[max_digit]
print(f"The digit that is maximum134567: {max_digit} (appears {max_count} times)")
