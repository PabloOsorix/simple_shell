#include "shell.h"

/**
 *main - Start Simple Shell
 *@argc: Size of argv
 *@argv: Arguments vector
 *Return: Exit value
 **/
int main(int argc, char **argv)
{
	int *argc1 = &argc;

	prompt(argc, argv);

	return (EXIT_SUCCESS);
}
