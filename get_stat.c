#include "shell.h"

/**
 *get_stat - Get the state of the line written by the user
 *Return: A pointer to the root
 *
 **/
int get_stat(char **path, char **input)
{

	char buffer[1024];
	int i = 0, j = 0, pchild = 0, execute = 0, status = 0;
	struct stat root;

	while ((path[i] != NULL) && (j == 0))
	{
		_strcat(buffer, path[i]);
		_strcat(buffer, "/");
		_strcat(buffer, input[0]);
		if (stat(buffer, &root) == 0)
		{
			pchild = fork();
			if (pchild == -1 )
			{
				perror("Error:");
				return (1);

			}
			if (pchild == 0)
			{
				execute = execve(buffer, input, environ);
				if(execute == -1)
				{
					exit(98);
				}
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
