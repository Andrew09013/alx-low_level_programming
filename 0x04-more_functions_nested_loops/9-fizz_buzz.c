#include <stdio.h>

/**
 * main - Fizz Buzz
 *
 * Return: 0
 **/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (1 % 5) != 0)
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz ");
		else if ((1 % 5) == 0 && (1 % 3) != 0)
			print("Buzz ");
		else if ((1 % 3) == 0 && (1 % 3) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
