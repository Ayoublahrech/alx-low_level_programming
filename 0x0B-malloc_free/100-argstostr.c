#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++; /* Add space for '\n' character. */
	}

	total_length++; /* Add space for the '\0' character. */

	str = malloc(total_length * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
