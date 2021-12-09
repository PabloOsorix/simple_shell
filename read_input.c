#include "shell.h"

/**
 *read_input - Get the line written by the user.
 *Return: A pointer to the line read
 **/
char *read_input(void)
{
	char *input = NULL;
	size_t bufsize = 0;


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
