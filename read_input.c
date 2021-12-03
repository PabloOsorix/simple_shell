#include "shell.h"

/**
 *read_input - Get the line written by the user
 *Return: A pointer to the line read
 *
 **/
char *read_input(void)
{
	char *input = NULL;
	size_t bufsize = 0;
	int chars_read = 0;

	chars_read = getline(&input, &bufsize, stdin);
	if (chars_read == -1)
	{
		free(input);
		exit(EXIT_SUCCESS);
	}
	if (input[0] == '\n')
	{
		return (input);
	}

	return (input);
}

int check_cmd(char **cmd)
{
	char *path, *concat;
	int len, status;
	struct stat *statbuf;

	statbuf = malloc(sizeof(struct stat*));
	if (!statbuf)
		return (-1);
	*cmd = *cmd;
	path = _getenv("PATH");
	path = strtok(path, "=");
	path = strtok(NULL, ":");
	while (path)
	{
		len = _strlen(path) + _strlen(*cmd) + 2;
		concat = malloc(len * sizeof(char));
		if (!concat)
			return (-1);
		
		concat = _strcat(concat, path);
		concat = _strcat(concat, "/");
		concat = _strcat(concat, *cmd);
		
		status = stat(concat, statbuf);
		if (status == 0)
		{
			printf("%ld\n", statbuf->st_dev);
			printf("%d\n", statbuf->st_mode);
		}
		path = strtok(NULL, ":");
	}
	
	return (1);
}

char *get_cmd(char *input)
{
	char *cmd;

	cmd = strtok(input, CMD_DELIM);
	check_cmd(&cmd);
	return (cmd);
}

char *_getenv(char *name)
{
	int i = 0;

	while (environ[i])
	{
		if (_strcmp(name, environ[i], _strlen(name)))
		{
			return(environ[i]);
		}
		i++;
	}
	
	return (NULL);
}
