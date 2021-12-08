#include "main.h"

/**
 * concat_path - Concatenates the path using the arguments passed
 * @path: Path
 * @args: Arguments
 * Return: Null or command depending of the case, check if coditions
 */

char *concat_path(char *path, char **args)
{
	char **parsing = NULL, *command = NULL;
	int len = 0;
	struct stat st;

	parsing = token_1(path, ":");
	for (len = 0; parsing[len]; len++)
	{
		command = malloc(sizeof(char) * (_strlen(parsing[len])
		+ _strlen(args[0]) + 2));
		if (command == NULL)
		{
			perror("Memory error in concat the path");
			free(command);
			return (NULL);
		}
		command = _strcpy(command, parsing[len]);
		command = _strcat(command, "/");
		command = _strcat(command, args[0]);
		if (stat(command, &st) == 0)
		{
			free_grid(parsing);
			return (command);
		}
		free(command);
	}
	free_grid(parsing);
	return (NULL);
}
