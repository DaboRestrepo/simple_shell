#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>


/* Auxiliares */
int _strlen(char *n);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int grid_size(char **grid);
void free_grid(char **grid);
int _strncmp(char *s1, char *s2, size_t n);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
extern char **environ;

/* Prototypes */
void prompt(void);
char *read_line(void);
char **token_1(char *str, char *delim);
int executable(char *command, char **args);
int word_counter(char *n, char *delim);
int our_exit(char **args);
int our_env(char **args);
int is_built_in(char **args);
char *get_path(char **args);
char **token_2(char *path);
char *concat_path(char *path, char **args);
char *real_path(char *find_path);

/* Structures */

/**
 * struct built_in_func - structure of the built in function.
 * @name: it refers the name of the function.
 * @builtin_func: it refers function.
 *
 * Description: when the struct is call,
 * the function is execute.
 */

typedef struct built_in_func
{
	char *name;
	int (*builtin_func)(char **args);
} built_in_func;

static const built_in_func bi[] = {
	{"exit", our_exit},
	{"env", our_env},
	{NULL, NULL},
};

#endif
