#include "shell.h"

/**
 *prompt - Wait for a command
 *
 **/
void prompt(void)
{
	char *prompt = "($) ";
        char *input = NULL;
	/*int status;*/

	while(1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));

		input = read_input();
		get_cmd(input);
	}
}
