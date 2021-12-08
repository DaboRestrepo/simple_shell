#include <stdio.h>
#include <stdlib.h>

/**
 * word_counter - counts each letter from the string
 *@str: string
 *@delim: Delimeters
 * Return: the result
 */

int word_counter(char *str, char *delim)
{
	unsigned int wc = 0;
	int estado = 0;

	while (*str)
	{
		if (*str == *delim)
		{
			estado = 0;
		}
		else if (estado == 0)
		{
			estado = 1;
			++wc;
		}
		++str;
	}
	return (wc);
}
