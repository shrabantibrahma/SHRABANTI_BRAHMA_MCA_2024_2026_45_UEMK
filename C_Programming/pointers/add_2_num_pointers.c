#include<stdio.h>

int main(){
   int num1= 10;
   int num2= 50;
   int *ptr1= &num1;
   int *ptr2= &num2;
   int sum;

   sum= *ptr1 + *ptr2;

   printf("Sum of %d and  %d is: %d\n", *ptr1, *ptr2,sum);

   return 0;
}
