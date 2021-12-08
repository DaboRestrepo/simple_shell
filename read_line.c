#include "main.h"

/**
 * read_line - get line from standard input
 * Return: str
 */

char *read_line(void)
{
	char *str = NULL;
	size_t len = 0;
	int caracteres;

	caracteres = getline(&str, &len, stdin);
	if (caracteres == -1)
	{
		if (caracteres == EOF)
		{
			free(str);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("No such file or directory\n");
			free(str);
			exit(EXIT_FAILURE);
		}
	}
	return (str);
}
