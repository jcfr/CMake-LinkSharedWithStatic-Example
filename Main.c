

#include <stdio.h>
#include <stdlib.h>
#include "FooShared.h"

int main(int argc, char* argv[])
{
  int output = 0;
  output = sumFooShared(4,4);
  printf("Sum is: %d\n", output);
  return EXIT_SUCCESS;
}
