#include "shell.h"

/**
 *_strlen - Length of a string
 *@s: Pointer to string
 *Description: Function for get length of a string
 *Return: Integer of length
 *
 **/
int _strlen(char *s)
{
	int i;

	for(i = 0; *(s + i) != '\0'; i++)
	{
	}

	return (i);
}

/**
 *_strcmp - Compares two strings
 *@s1: String to compare
 *@s2: String to compare
 *@n: Bytes to compare
 *Description: Function that compares two strings
 *Return: An integer less than, equal to, or greater
 *than zero if s1 is found, respectively, to be less than,
 *to match, or be greater than s2
 *
 **/

int _strcmp(char *s1, char *s2, int n)
{
	int i = 0;

	while (i <= n)
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		break;		
	}
	if (i == n)
		return (1);
	return (0);
}

/**
 *_strcat - Concatenates two strings
 *@dest: String final
 *@src: String to concat
 *Description: Function for concatenates two strings
 *Return: A pointer to string concat
 *
 **/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(src + j) != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
