#include "shell.h"



/**
 * _strdup - allocate a new copy str in memory
 * @str: pointer copy in memory
 *
 * Return: return new copy of memory
*/


char *_strdup(const char *str)
{
	char *p;
	int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		length++;
		str++;
	}

	str = str - length;


	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);

	while (i <= length)
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}


/**
 * _strcmp - compare two string pointer if true
 * @s1: first string to compare with
 * @s2: second string to compare with
 *
 * Return: return strings that compared are true
*/

int _strcmp(char *s1, char *s2)
{
	int comp;

	comp = (int)*s1 - (int)*s2;

	while (*s1)
	{
		if (s1 != s2)
			break;
		s1++;
		s2++;
		comp = (int)*s1 - (int)*s2;
	}
	return (comp);
}

/**
 * _strlen - return size of string
 * @s: pointer string to count
 *
 * Return: size of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
