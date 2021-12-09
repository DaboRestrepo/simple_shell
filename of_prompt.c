#include "main.h"
/**
 * prompt - Function with the infinite loop.
 * Return: void.
 */

void prompt(void)
{
	char *string = "DANA# ", *str = NULL, **args = NULL;
	int status = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			write(STDOUT_FILENO, string, _strlen(string));
		}
		str = read_line();
		if (*str == '\n' && _strlen(str) == 1)
		{
			free(str);
			continue;
		}
		args = token_1(str, " \n\t");/*if (!args)continue;*/
		status = is_built_in(args);
		if (status == -1)
		{
			write(STDOUT_FILENO, "./hsh: No such file or directory\n",
			_strlen("./hsh: No such file or directory\n"));
		}
		(void)status;
	}
}
