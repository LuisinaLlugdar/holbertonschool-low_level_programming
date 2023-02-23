#include <stdio.h>
/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
int a, b, c;
for (a = 1; a <= 100; a++)
{
b = (a % 3);
c = (a % 5);
if (b == 0 && c == 0)
{
printf("FizzBuzz ");
}
else if (c == 0 && a != 100)
{
printf("Buzz ");
}
else if (b == 0)
{
printf("Fizz ");
}
else if (a == 100)
{
printf("Buzz");
}
else
{
printf("%d ", a);
}
}
return (0);
}
