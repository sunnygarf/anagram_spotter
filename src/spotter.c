/**
 * spotter.c
 * 2024-01-02
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "spotter.h"
#include "main.h"

void clean(char *str)
{
  bool debug = true;

  char cleaned[ENOUGH];
  int index = 0;

  for (int i = 0; i < strlen(str); i++) {
    if (isalpha(str[i])) {
      cleaned[index] = tolower(str[i]);
      index++;
    }
  }
  cleaned[index] = '\0';

  if (debug)
    printf("cleaned: %s\n", cleaned);

  strcpy(str, cleaned);
}