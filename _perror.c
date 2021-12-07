#include "shell.h"

/**
 * _perror - This function do the stat, PID & PPID,
 * and find & excecute the command in the path.
 * @shell_name: Name of the shell.
 * @command_name: Name of the command.
 * Return: Zero in case completes the task successfully.
 */

void _perror(char *shell_name, char *command_name)
{
	int i = 0;
	char error[1024];

	memset(error, 0, 1024);
	_strcat(error, shell_name);
	_strcat(error, ": ");
	_strcat(error, "1: ");
	_strcat(error, command_name);
	_strcat(error, ": ");
	_strcat(error, "not found\n");

	for (i = 0; error[i] != '\0'; i++)
	{}

	write(STDERR_FILENO, &error, i);
}
