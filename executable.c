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
	struct stat st;

	if (stat(command, &st) != 0)
	{
		perror("./hsh");
		return (1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("No such file or directory");
		free(command);
		free_grid(args);
		return (1);
	}
	else if (pid == 0)
	{
		if (execve(command, args, environ) == -1)
		{
			perror("Couldn't execute the command");
			free(command);
			free_grid(args);
			return (1);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}
