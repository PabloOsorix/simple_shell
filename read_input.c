#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

char *read_input(void)
{
	char *input = NULL;
	size_t bufsize = 0;

	getline(&input, &bufsize, stdin);
	if (getline(&input, &bufsize, stdin) == -1)
	{
		free(input);
		exit(EXIT_SUCCESS);
	}
	if (input[0] == '\n')
	{
		return (input);
	}

	return (input);

}
