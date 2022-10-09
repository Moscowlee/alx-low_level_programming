#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this is a function that duplicates a string
 * @str: an input string to duplicate
 * Return: NULL if str == NULLOA
 * @str
 */

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	/*calculate the size of the string*/
	while (str[l] != '\0')
		l++;

	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
