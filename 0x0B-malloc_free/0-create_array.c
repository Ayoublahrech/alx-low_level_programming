#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of characters and initialize it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Description: This function allocates an array of characters of size 'size' and initializes
 * each element with the character 'c'.
 *
 * Return: If successful, a pointer to the created array; otherwise, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
