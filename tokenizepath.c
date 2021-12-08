#include "shell.h"
#include <stdio.h>
#include <stddef.h>

/**
 * tokenize_path - This function gets the folders of the
 * environment variable and split them into tokens.
 * @road_path: Folders inside the environment variable.
 * Return: String with pointers to every individual folder.
 */

char **tokenize_path(char *road_path)
{
	char **tokenize_path = NULL;
	size_t i = 0;

	tokenize_path = malloc(sizeof(char *) * 1024);
	tokenize_path[0] = strtok(road_path, ":");

	while (tokenize_path[i])
	{
		i++;
		tokenize_path[i] = strtok(NULL, ":");
	}
	return (tokenize_path);
}
