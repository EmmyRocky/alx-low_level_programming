#include <stdio.h>

/**
 * main - prints Fizz for int divsible by 3 and Buzz for 5
 *
 * Return: int
 */
int main(void)
{
int n = 1;

while (n < 100)
{
	if (n % 15 == 0)
		printf("FizzBuzz ");
	else if (n % 5 == 0)
		printf("Buzz ");
	else if (n % 3 == 0)
		printf("Fizz ");
	else
		printf("%d ", n);
	n++;
}
printf("Buzz\n");
return (0);
}
