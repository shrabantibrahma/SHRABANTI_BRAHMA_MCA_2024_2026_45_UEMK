6. 1*2*3+2*3*4+……………………………….+n*(n+1)*(n+2)

def series_sum(n):
    total_sum = 0
    for i in range(1, n+1):
        total_sum += i * (i + 1) * (i + 2)
    return total_sum

# Example
n = 4
print(series_sum(n))  # Output for n = 4
