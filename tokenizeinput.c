#include "shell.h"
#include <stdio.h>
#include <stddef.h>

#define TOK_BUF 64
#define TOK_DELIM "\t\r\n\a"

char **tokenizeinput (char *input)
{
	int bufsize = TOK_BUF, i = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *strtok_delim;

	if(!tokens)
		exit(EXIT_FAILURE);

	strtok_delim = strtok(input, TOK_DELIM);
	while(strtok_delim != NULL)
	{
		tokens[i] = strtok_delim;
		i++;

		if(i >= bufsize)
		{
			bufsize += TOK_BUF;
			tokens = realloc(tokens, bufsize * sizeof(char*));
			if(!tokens)
				exit(EXIT_FAILURE);
		}
		strtok_delim = strtok(NULL, TOK_DELIM);
	}
	tokens[i] = NULL;
	return (tokens);

}