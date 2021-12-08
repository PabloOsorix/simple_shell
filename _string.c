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

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}

	return (i);
}

#include "shell.h"

/**
 * _strcmp -  function should work exactly like strcmp
 * @s1: String 1
 * @s2: String 2
 * Return: 0 if the strings are the same
 * Different to zero if the strings are different.
 */

int _strcmp(char *s1, char *s2)
{
	int indx;

	for (indx = 0; s1[indx] != '\0' && s2[indx] != '\0'; indx++)
	{
		if (s1[indx] != s2[indx])
		{
			return (s1[indx] - s2[indx]);
		}
	}
	return (0);
}

#include "shell.h"
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
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}


#include "shell.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: the pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	dest = malloc((i * sizeof(str[0])) + 1);
	if (dest == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dest[j] = str[j];

	return (dest);
	free(dest);
}
