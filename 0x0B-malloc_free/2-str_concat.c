#include <stddef.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2) {
  char *conct;
  int i, ci;

  if (s1 == NULL) {
    s1 = "";
  }

  if (s2 == NULL) {
    s2 = "";
  }

  i = ci = 0; /* This statement is now outside of the if statement. */

  while (s1[i] != '\0') {
    i++;
  }
  while (s2[ci] != '\0') {
    ci++;
  }

  conct = malloc(sizeof(char) * (i + ci + 1));
  if (conct == NULL) {
    return NULL;
  }

  while (s1[i] != '\0') {
    conct[i] = s1[i];
    i++;
  }
  while (s2[ci] != '\0') {
    conct[i] = s2[ci];
    i++, ci++;
  }

  conct[i] = '\0';

  return conct;
}
