#include "main.h"

/**
 * executable - Executes the child process
 * @args: arguments
 * @command: command passed
 * Return: the result
 */

int executable(char *command, char **args)
{
	pid_t pid = 0;
	int status = 0;

	pid = fork();
	if (pid == -1)
	{
		/*perror("No such file or directory");*/
		return (-1);
	}
	else if (pid == 0)
	{
		if (execve(command, args, NULL) == -1)
		{
			/*perror("./hsh");*/
			free_grid(args);
			free(command);
			return (-1);
		}
		else
		{
			free_grid(args);
			free(command);
		}
	}
	else
	{
		wait(&status);
		free_grid(args);
		/*free(command);*/
	}
	return (1);
}
