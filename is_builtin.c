#include "main.h"
/**
 * is_built_in - Checks if the arguments passed are built-in
 * @args: arguments
 * Return: 1
 */
int is_built_in(char **args)
{
	int (*func)(char **args) = NULL;
	int index = 0, sub = 0, funcion = 0, result = 0;

	if (args[0] == NULL)
	{
		perror("No such file or directory");
		free_grid(args);
		return (-1);
	}
	for (; bi[index].name != NULL; index++)
	{
		sub = (_strcmp(args[0], bi[index].name));
		if (sub == 0)
		{
			func = bi[index].builtin_func;
			funcion = func(args);
			return (funcion);
		}
	}
	result = no_built_in(args);
	return (result);
}

/**
 * no_built_in - Checks if the arguments passed aren't built-in.
 * @args: arguments.
 * Return: 0.
 */
int no_built_in(char **args)
{
	int pos = 0, result = 0;
	char *command = NULL, *path = NULL;

	while (args[pos])
	{
		if (*args[pos] == '/')
		{
			result = executable(args[0], args);
			free(command);
			return (result);
		}
		if (*args[pos] != '/')
		{
			path = get_path(args);
			if (!path)
				return (-1);
			command = concat_path(path, args);
			if (!command)
				return (-1);
			result = executable(command, args);
			free(command);
			return (result);
		}
		pos++;
	}
	return (0);
}
