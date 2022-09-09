#include <stdio.h>
/**
 * main - program that prints the alphabets in lowercase
 * using putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
