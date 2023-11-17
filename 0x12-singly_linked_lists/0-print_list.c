#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t n;

    n = 0;
    while (h) {
        if (h->str == NULL) {
            printf("[0] (nil)");
        } else {
            printf("[%lu] %s", h->len, h->str);
        }
        if (h->next) {
            printf("\n");
        }
        h = h->next;
        n++;
    }
    printf("\n");
    return n;}
