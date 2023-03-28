#include "main.h"

/**
 * rev_string - prints a string in reverse.
 *
 * @str: the string.
 */
void rev_string(char *s)
{
	int i = 0;
	int len, len1, n;
	char tmp;

	for (len = 0; s[len]; len++)
	{
	}
	len1 = len - 1;
	for (n = 0; n < len / 2; n++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1] = tmp;
		i++;
		len1--;
	}
}
