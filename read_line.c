#include "main.h"

/**
 * read_line - get line from standard input
 * Return: str
 */

char *read_line(void)
{
	char *str = NULL;
	size_t len = 0;
	int caracteres = 0;

	caracteres = getline(&str, &len, stdin);
	if (caracteres == -1)
	{
		free(str);
		exit(EXIT_SUCCESS);
	}
	return (str);
}
