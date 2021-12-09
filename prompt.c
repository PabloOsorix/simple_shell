#include "shell.h"

/**
 *prompt - Wait for a command
 *@argc: It is the number of argv.
 *@argv: It´s the variadic variable argv that receives arguments
 *unknown.
 **/
int main(int argc, char **argv)
{
	char *prompt = "$ ", *input = NULL, *road_path = NULL, *path_copy = NULL;
	char **input_tokenize = NULL, **path_tokenize = NULL;
	void (*builtin)(char **, char *);
	(void)argc;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, _strlen(prompt));

		input = read_input();
		input_tokenize = tokenizeinput(input);
		if (input_tokenize[0] == NULL)
		{
			free(input_tokenize);
			free(input);
			continue;
		}
		builtin = selectfunction(input_tokenize);
		if (builtin == NULL)
		{
			road_path = get_env("PATH");
			path_copy = _strdup(road_path);
			path_tokenize = tokenize_path(path_copy);

			if (get_stat(path_tokenize, input_tokenize) == -1)
			{
				_perror(argv[0], input_tokenize[0]);
			}
		}
		else
		{
			exitf(input_tokenize, input);
		}
		free(path_tokenize);
		free(path_copy);
		free(input_tokenize);
		free(input);

	}
	free(path_tokenize);
	free(path_copy);
	free(input_tokenize);
	free(input);
}
