#ifndef LISTS_H_
#define LISTS_H_

typedef struct list_t {
    char *str;
    size_t len;
    struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
