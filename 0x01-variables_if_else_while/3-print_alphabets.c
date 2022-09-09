#include <stdio.h>
/**
 * main - program that prints the alphabets in lowercase
 * then in uppercase using using putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a', C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
