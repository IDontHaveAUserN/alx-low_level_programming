#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
printf("Last digit of %d", n +" is %d", n +" and is greater than 5\n");
else (n == 0)
printf("Last digit of %d", n +" is %d", n +" and is 0\n");
else
printf("Last digit of %d", n +" is %d", n +" and is less than 6 and not 0\n");

return (0);
}
