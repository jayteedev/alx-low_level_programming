#include "main.h"
/**
 * main - A program that prints _putcha followed by a new line
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
