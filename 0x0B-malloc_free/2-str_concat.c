#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the contents of s1, followed by s2.
 *         Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concatenated = (char *)malloc(len1 + len2 + 1);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatenated[i] = s1[i];

	for (j = 0; s2[j]; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
