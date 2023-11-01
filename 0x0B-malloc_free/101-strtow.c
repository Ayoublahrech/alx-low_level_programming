#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            if (in_word)
            {
                in_word = 0;
                count++;
            }
        }
        else
        {
            in_word = 1;
        }
        str++;
    }

    if (in_word)
        count++;

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings, or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);

    int word_count = count_words(str);
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));

    if (words == NULL)
        return (NULL);

    int i = 0;
    while (*str)
    {
        if (*str != ' ')
        {
            int length = 0;
            char *start = str;
            while (*str != ' ' && *str != '\0')
            {
                length++;
                str++;
            }

            words[i] = (char *)malloc(length + 1);

            if (words[i] == NULL)
            {
                while (i >= 0)
                {
                    free(words[i]);
                    i--;
                }
                free(words);
                return (NULL);
            }

            strncpy(words[i], start, length);
            words[i][length] = '\0';
            i++;
        }
        else
        {
            str++;
        }
    }

    words[i] = NULL;
    return words;
}
