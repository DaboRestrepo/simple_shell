#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string.
 * @n: String
 * Return: the result
 */

int _strlen(char *n)
{
	int i = 0;

	while (n[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strncmp - Function to compares two strings and n bytes.
 * @s1: String one
 * @s2: String two
 * @n: the size of the string.
 * Return: the subtraction of the strings.
 */

int _strncmp(char *s1, char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		if (*s1 == '\0')
			return (0);
	}
	return (0);
}

/**
 * _strcmp - Function to compares two strings.
 * @s1: String one
 * @s2: String two
 * Return: the subtraction of the strings.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * free_grid - Frees the space on memory for the grid
 * @grid: grid
 */

void free_grid(char **grid)
{
	int i = 0;

	for (i = 0; grid[i]; i++)
		free(grid[i]);
	free(grid);
}

/**
 * _strcpy - Function to copy paste one string.
 * @dest: Destiny
 * @src: Source
 * Return: Dest.
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int count = 0;

	count = _strlen(src);

	for (; m <= count; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
