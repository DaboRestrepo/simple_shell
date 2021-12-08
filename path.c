#include "main.h"

/**
 * get_path - Function to get the path.
 * @args: tha arguments.
 * Return: null.
 */

char *get_path(char **args)
{
	char **env = NULL, **parsing = NULL;
	char *find_path = NULL, *concat_path = NULL;

	env = environ;
	while (*env)
	{
		if ((_strncmp(*env, "PATH", 4)) == 0)
		{
			find_path = malloc(sizeof(char) * (_strlen(*env) + 1));
			if (find_path == NULL)
			{
				perror("Memory error in path");
				free(find_path);
				return (NULL);
			}
			_strcpy(find_path, *env);
			return (real_path(find_path));
		}
		env++;
	}
	free_grid(args);
	return (NULL);
}
