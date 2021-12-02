#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
#include <stddef.h>
#include <unistd.h>
#include <string.h>

void prompt(void)
{
	char *prompt = "$ ";
        char *input = NULL;

	while(1)
	{

		write(STDOUT_FILENO, prompt, strlen(prompt));

		input = read_input();
		printf("%s\n", input);


	}



}
