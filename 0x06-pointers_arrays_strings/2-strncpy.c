#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination input
 * @src: source input
 * @n: size of input n
 *
 * Return: pointer of destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
