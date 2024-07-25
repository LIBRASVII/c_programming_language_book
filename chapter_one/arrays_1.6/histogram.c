#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char string[] = "C Programming Language";
  int array[] = {};
  int i = 0;

  for (int i = 0; i <= strlen(string); i++)
    if (string[i] != '\n')
      array[i] = atoi(string);

  while (array[i])
    printf("%d", array[i]);

  return 0;
}
