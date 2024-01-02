/**
 * main.c
 * 2024-01-02
 */

#include <stdio.h>
#include "main.h"
#include "parser.h"

int main(void)
{
  bool debug = true;

  char s1[ENOUGH];
  char s2[ENOUGH];

  parse(s1, s2);
  if (debug) {
    printf("s1: %s", s1);
    printf("s2: %s", s2);
  }

  return 0;
}