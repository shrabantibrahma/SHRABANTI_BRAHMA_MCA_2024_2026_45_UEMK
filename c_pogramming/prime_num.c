#include <stdio.h>
int main()
{
int n, i, j;
printf("Enter a number: ");
scanf("%d", &n);
printf("Prime numbers between 1 to %d are: ", n);
for (i = 2; i <= n; i++)
{
for (j = 2; j <= i / 2; j++)
{
if (i % j == 0) {
break;
}
}
if (j > i / 2)
{
printf("%d, ", i);
}
}
return 0;
}
