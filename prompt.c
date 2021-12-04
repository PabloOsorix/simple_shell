#include "shell.h"

/**
 *prompt - Wait for a command
 *
 **/
void prompt(void)
{
	char *prompt = "$ ", *input = NULL, *road_path;
        char **input_tokenize, **path_tokenize;
	int i = 0;

	while(1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));

		input = read_input();
		input_tokenize = tokenizeinput(input);
		road_path = get_env("PATH");
		path_tokenize = tokenize_path(road_path);

	}
}
