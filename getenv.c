#include "shell.h"
#include <stdio.h>

/**
 *get_env - This function calls the global variable environ and obtains
 *the route of the PATH.
 *@PATH: This is the string "PATH" which we´re going
 *to serch the route PATH in the environ.
 *Return: It return the specific route of the PATH in the environ.
 *if it doesn´t found the PATH return NULL.
 */
char *get_env(char *PATH)
{

	int i = 0, j = 0;

	for (; environ[i] != NULL; i++)
	{
		for (; PATH[j] == environ[i][j]; j++)
		{
		}
		if (PATH[j] == '\0' && environ[i][j] == '=')
			return (environ[i] + j + 1);
	}
	return (NULL);
}
