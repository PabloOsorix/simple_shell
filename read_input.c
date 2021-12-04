#include "shell.h"

/**
 *read_input - Get the line written by the user
 *Return: A pointer to the line read
 *
 **/
char *read_input(void)
{
	char *input = NULL;
	size_t bufsize = 0;
	int chars_read = 0;

	chars_read = getline(&input, &bufsize, stdin);
	if (chars_read == -1)
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
