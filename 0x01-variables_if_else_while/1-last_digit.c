#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number
 * is greater than 5, zero, or less than 6 and not 0
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, last;
	char intro[] = "Last digit of";

	n = rand() - RAND_MAX / 2;
	last = n % 10;
	srand(time(0));
	if (last > 5)
	{
		printf("%s %d is %d and is greater than 5\n", intro, n, last);
	}
	else if (last == 0)
	{
		printf("%s %d is %d and is 0\n", intro, n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", intro, n, last);
	}
	return (0);
}
