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

#define CMD_DELIM " \t"

void prompt(void);
char *read_input(void);
int _strlen(char *);
char *get_cmd(char *);
int check_cmd(char**);
char *_getenv(char *);
int _strcmp(char *s1, char *s2, int n);
char *_strcat(char *dest, char *src);

#endif
