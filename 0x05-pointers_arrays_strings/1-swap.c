#include<stdio.h>
#include "main.h"
/**
*swap_int - swaps the values of two integers.
*@a: first value.
*@b: second value.
*Return: not.
*/
void swap_int(int *a, int *b)
{

	int s = *a;
	*a = *b;
	*b = s;
}
