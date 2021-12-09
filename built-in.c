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


#include "shell.h"
/**
 * _env - Displays the file containing all global variables
 * @av: The arguments
 * @line: The line
 * Return: Always 0 Success
 */
int _env(char **av, int line)
{
	int i = 0;
	(void)av;
	(void)line;

	while (environ[i])
	{
		d_printf(STDOUT_FILENO, "%s\n", environ[i]);
		i++;
	}
	return (0);
}
