#include "main.h"

/**
 * real_path - Checks the real path
 * @find_path: Finds real path
 * Return: path
 */

char *real_path(char *find_path)
{
	char *path = NULL;
	unsigned int index1 = 5, index2 = 0;

	path = malloc(sizeof(char) * (_strlen(find_path) + 1));
	if (path == NULL)
	{
		perror("Memory error in path malloc");
		free(path);
		return (NULL);
	}
	while (find_path[index1])
	{
		path[index2] = find_path[index1];
		index1++;
		index2++;
	}
	free(find_path);
	return (path);
}
