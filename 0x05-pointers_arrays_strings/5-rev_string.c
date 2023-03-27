#include "main.h"

/**
 * rev_string - reverese a string.
 *
 * @s: the string.
 */
void rev_string(char *s)
{
	int i = 0;
	int m = 0;
	char str[34];

	while (s[i])
	{
		i++;
	}
	while (i + 1)
	{
		str[m] = s[i];
		i--;
		m++;
	}
	while (s[i])
	{
		s[i] = str[i];
		i++;
	}
}
