#include <stdio.h>

int sum_of_natural_numbers(int n);

int main() {
    int n = 20;
    int result;


    result = sum_of_natural_numbers(n);

printf("The sum of the first %d natural numbers is %d\n", n, result);

    return 0;
}
int sum_of_natural_numbers(int n) {

    if (n == 1) {
        return 1;
    } else {
    
        return n + sum_of_natural_numbers(n - 1);
    }
}
