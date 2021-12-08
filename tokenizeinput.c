#include "shell.h"
#include <stdio.h>
#include <stddef.h>

#define TOK_DELIM " \t\r\n\a"

/**
 * tokenizeinput - This function takes the command given by
 * the user and split it into tokens.
 * @input: Command given by the user.
 * Return: A array with pointers to the diferent tokens.
 */


char **tokenizeinput(char *input)
{
	int i = 0;
	char **tokens = malloc(sizeof(char *) * 1024);
	char *strtok_delim;

	if (!tokens)
		exit(EXIT_FAILURE);

	strtok_delim = strtok(input, TOK_DELIM);
	while (strtok_delim != NULL)
	{
		tokens[i] = strtok_delim;
		i++;
		strtok_delim = strtok(NULL, TOK_DELIM);
	}
	tokens[i] = NULL;
	return (tokens);

}
