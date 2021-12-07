#include "shell.h"
void exitf(char **args, char *line)
{
	int i = 0;

	for (i = 0; args[i] != NULL; i++)
	{
		free(args[i]);
	}
	free(args);
	/* free(line);*/
	(void)line;
	exit(EXIT_SUCCESS);
}
