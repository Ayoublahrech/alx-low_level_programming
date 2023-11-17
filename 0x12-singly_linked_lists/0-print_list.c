#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: The head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t n = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%lu] %s\n", h->len, h->str);
        }

        h = h->next;
        n++;
    }

    return n;
}
