#include "shell.h"
#include <stdio.h>

char *get_env(char *PATH)
{

	int i = 0, j = 0;

	for(; environ[i] != NULL; i++)
	{
		for(; PATH[j] == environ[i][j]; j++)
		{
		}
		if(PATH[j] == '\0' && environ[i][j] == '=')
			return (environ[i] + j + 1);
	}
	return(NULL);
}
