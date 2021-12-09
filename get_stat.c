#include "shell.h"
/**
 *get_stat - Get the state of the line written by the user
 *@path: Is the string with the route of the tokenized path
 *@input: Is the tokenized input written by the user in the prompt.
 *Return: 0 if the command wasn´t found, 1 if the command was found.
 **/
int get_stat(char **path, char **input)
{
	char buffer[1024];
	int i = 0, j = 0, pid = 0, execute = 0, status = 0, x = 0;
	struct stat root;

	for (i = -1; (i == -1 || path[i] != NULL) && j == 0; i++)
	{
		for (x = 0; x < 1024; x++)
			buffer[x] = '\0';
		if (i != -1)
		{
			_strcat(buffer, path[i]);
			_strcat(buffer, "/");
		}
		_strcat(buffer, input[0]);
		if (stat(buffer, &root) == 0)
		{
			pid = fork();
			if (pid == -1)
			{
				perror("Error:");
				return (1);
			}
			if (pid == 0)
			{
				execute = execve(buffer, input, environ);
				if (execute == -1)
					exit(98);
			}
			else
			{
				j = 1;
				wait(&status);
				break;
			}
		}
	}
	if (j == 0)
		return (-1);
	return (0);
}
