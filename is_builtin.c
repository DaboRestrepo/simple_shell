#include "main.h"
/**
 * is_built_in - Checks if the arguments passed are built-in
 * @args: arguments
 * Return: 1
 */
int is_built_in(char **args)
{
	int (*func)(char **args) = NULL;
	int index = 0, pos = 0, sub = 0, funcion = 0;
	char *command = NULL, *path = NULL;

	if (args[0] == NULL)
	{
		/*perror("No such file or directory");*/
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
	while (args[pos])
	{
		if (*args[pos] == '/')
			return (executable(args[0], args));
		if (*args[pos] != '/')
		{
			path = get_path(args);
			if (!path)
				return (-1);
			command = concat_path(path, args);
			if (!command)
				return (-1);
			return (executable(command, args));
		}
		pos++;
	}
	return (1);
}
