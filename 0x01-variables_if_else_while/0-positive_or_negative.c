#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Input a number\n");
scanf("%d",&n);

if (n>0)
printf("%d is positive\n",n);
else if (n==0)
printf("%d is zero",n);
else
printf("%d is negative",n);

return (0);
}
