#include "main.h"
/**
 * token_1 - Function that tokenize the user string.
 * @str: user string.
 * @delim: delimeters
 * Return: the split of the string.
 */
char **token_1(char *str, char *delim)
{
	unsigned int wc = 0, pos = 0;
	char **split = NULL;

	wc = word_counter(str, delim);
	split = malloc(sizeof(char *) * (wc + 1));
	if (split == NULL)
	{
		free(split);
		perror("Memory error in the parsing process\n");
		return (NULL);
	}
	split[pos] = _strdup(strtok(str, delim));
	pos++;
	while (pos < wc)
	{
		split[pos] = strdup(strtok(NULL, delim));
		pos++;
	}
	split[pos] = NULL;
	free(str);
	return (split);
}
