#include "shell.h"

/**
 * freearrays - frees arrays from memomy
 * @strarr: double pointer
*/

void freearrays(char **strarr)
{
	int i = 0;

	if (!strarr)
		return;

	while (strarr[i])
	{
		free(strarr[i]);
		strarr[i] = NULL;
		i++;
	}
	free(strarr), strarr = NULL;
}
