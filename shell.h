#ifndef SHELL_H
#define SHELL_H

extern char **environ;

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define CMD_DELIM " \t"

void prompt(int argc, char **argv);
char *read_input(void);
int _strlen(char *);
char *get_cmd(char *);
int check_cmd(char**);
char *get_env(char *);
int _strcmp(char *s1, char *s2, int n);
char *_strcat(char *dest, char *src);
char **tokenize_path(char *road_path);
char **tokenizeinput (char *input);
int get_stat(char **path, char **input);
void _perror(char *shell_name, char *command_name);
#endif
