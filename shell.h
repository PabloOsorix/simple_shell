#ifndef SHELL_H
#define SHELL_H
#define _GNU_SOURCE

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

#define CMD_DELIM " \t"

extern char **environ;

/**
 * struct buildin - Structure for selecting type of function.
 * @program: Built-in function.
 * @f: Calls the built-in function.
 */
typedef struct buildin
{
	char *program;
	void (*f)(char **, char *);
} order;

void prompt(int argc, char **argv);

char *read_input(void);
char *get_cmd(char *);
char *get_env(char *);
int get_stat(char **path, char **input);

int _strlen(char *);
int _strcmp(char *s1, char *s2, int n);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);

char **tokenize_path(char *road_path);
char **tokenizeinput (char *input);
void exitf(char **args, char *line);
void (*selectfunction(char **args))(char **args, char *line);
void _perror(char *shell_name, char *command_name);
#endif
