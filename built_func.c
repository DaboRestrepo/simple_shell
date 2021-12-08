#include "main.h"

/**
 * our_exit - Function to exit the shell.
 * @args: the arguments.
 * Return: exit.
 */

int our_exit(char **args)
{
	free_grid(args);
	exit(EXIT_SUCCESS);
}

/**
 * our_env - Function to print the environment.
 * @args: the arguments.
 * Return: always 0.
 */

int our_env(char **args)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}

/**
 * _strcat - Concatenar dos strings.
 * @dest: destino del string.
 * @src: fuente del string.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	for (m = 0; dest[m] != '\0'; m++)
	{
		continue;
	}
	for (n = 0; src[n] != '\0'; m++, n++)
	{
		dest[m] = src[n];
	}
	return (dest);
}

/**
 * _strdup - Duplicate a string with malloc
 * @str: Pointer to the string.
 * Return: Pointer to the new address.
 */

char *_strdup(char *str)
{
	int i;
	int str_len = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	str_len = _strlen(str);
	str2 = malloc(sizeof(char) * (str_len + 1));
	for (i = 0; i < str_len + 1; i++)
	{
		if (str2 == NULL)
		{
			return (NULL);
		}
		str2[i] = str[i];
	}
	return (str2);
}
