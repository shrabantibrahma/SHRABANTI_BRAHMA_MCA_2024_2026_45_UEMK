#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    int n, i;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    
    // Generate Fibonacci series
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    
    return 0;
}
