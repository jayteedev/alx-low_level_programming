#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination input
 * @src: source input
 * @n: size of n
 *
 * Return: pointer of destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
