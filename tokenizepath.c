#include "shell.h"
#include <stdio.h>
#include <stddef.h>

char **tokenize_path(char *road_path)
{
	char **tokenize_path = NULL;
	size_t i = 0;

	tokenize_path = malloc(sizeof(char*) * 1024);
	tokenize_path[0] = strtok(road_path, ":");

	while (tokenize_path[i])
	{
		i++;
		tokenize_path[i] = strtok(NULL, ":");
	}
	return (tokenize_path);
}
