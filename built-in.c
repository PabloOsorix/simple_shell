#include "shell.h"
/**
 *selectfunction - This function select the builtins
 *@args: It´s a string with the tokenized input.
 *Return: Return a builtin or a NULL if there is not coincidence.
 */
void (*selectfunction(char **args))(char **args, char *line)
{
	int i = 0;

	order options[] = {
		{"exit", exitf},
		{/*"env", _env*/},
		{NULL, NULL}
	};

	while (options[i].program != NULL)
	{
		if (_strcmp(args[0], options[i].program) == 0)
		{
			return (options[i].f);
		}
		i++;
	}
	return (NULL);
}
