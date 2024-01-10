#include "shell.h"


/**
 * _getenv - checks first index env with varaible
 * @var: variable pointer
 *
 * Return: env or NULL
*/



char *_getenv(char *var)
{
	char *valstart, *env;
	size_t len = _strlen(var);
	int i = 0;

	while (environ[i] != NULL)
	{
		if (_strncmp(environ[i], var, len) == 0 && environ[i][len] == '=')
		{
			valstart = environ[i] + len + 1;
			env = _strdup(valstart);
			return (env);
		}
		i++;
	}
	return (NULL);
}
