#include "shell.h"


char *_stringncopy(char *bar, char *stde, int l)
{
	int i, j;
	char *s = bar;

	i = 0;
	while (stde[i] != '\0' && i < l - 1)
	{
		bar[i] = stde[i];
		i++;
	}
	if (i < l)
	{
		j = i;
		while (j < l)
		{
			bar[j] = '\0';
			j++;
		}
	}
	return (s);
}


char *stringncate(char *bar, char *stde, int l)
{
	int i, j;
	char *s = bar;

	i = 0;
	j = 0;
	while (bar[i] != '\0')
		i++;
	while (stde[j] != '\0' && j < l)
	{
		bar[i] = stde[j];
		i++;
		j++;
	}
	if (j < l)
		bar[i] = '\0';
	return (s);
}


char *_stringchar(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
