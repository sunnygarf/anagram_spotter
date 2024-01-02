/**
 * parser.c
 * 2024-01-02
 */

#include <stdio.h>
#include "parser.h"
#include "main.h"

void parse(char *str1, char *str2)
{
  printf("enter string 1: ");
  fgets(str1, ENOUGH, stdin);

  printf("enter string 2: ");
  fgets(str2, ENOUGH, stdin);
}