#include <stdio.h>
int main() {
printf("Enter first number: ");
int a;
scanf("%d",&a);
printf("Enter second number: ");
int b;
scanf("%d",&b);
if(a>b){
printf("%d is maximum\n", a);
}
else{
printf("%d is maximum\n", b);
}
return 0;
}
