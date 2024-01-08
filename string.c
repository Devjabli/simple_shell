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
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		p[i] = str[i];
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
	int cmp;

	cmp = (int)*s1 - (int)*s2;

	while (*s1)
	{
		if (s1 != s2)
			break;
		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}

/**
 * _strlen - return size of string
 * @s: pointer string to count
 *
 * Return: size of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}


/**
 * _strcat - it concatenates the distinate and source
 * @dest: pointer destination
 * @src: pointer source
 *
 * Return: return destination as a full string from dest and src
*/

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = *src;
	return (dest);
}

/**
 * _strcpy - it copies the source to destination string
 * @dest: destination pointer string
 * @src: source pointer string
 *
 * Return: return the first destination as coped
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
