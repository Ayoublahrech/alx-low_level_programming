#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char *argv[] = {"0-whatsmyname", NULL};

  printf("%s\n", argv[0]);

  return (0);
}
