#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concates two strings.
 * @s1: first String
 * @s2: second String.
 * @n: The first n bytes of s2.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *ar;
        unsigned int i = 0, ii = 0, size1 = 0, size2 = 0;

	if (s1)
	{
        	while (s1 && s1[size1])
                	size1++;
	}
	if (s2)
	{
        	while (s2 && s2[size2])
                	size2++;
	}
        if (n < size2)
                ar = malloc(sizeof(char) * (size1 + n + 1));
        else
                ar = malloc(sizeof(char) * (size1 + size2 + 1));

        if (ar == NULL)
                return (NULL);

        for (i = 0; i < size1; i++)
        {
                ar[i] = s1[i];
                i++;
        }

	for (ii = 0; n < size2 && i < (size1 + n); ii++)
	{
                ar[i] = s2[ii];
		i++;
	}
        for (ii = 0; n >= size2 && i < (size1 + size2); ii++)
	{
                ar[i] = s2[ii];
		i++;
	}

        ar[i] = '\0';

        return (ar);
}
