#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i, count;

  if(argc < 2) {
    printf("You need more arguments\n", );
    exit(1);
  }
  count = atoi(argv[1]);

  for(i = 1; i <= count; i++) {
    if(i % 15 == 0) {
      printf("Fizzbuzz\n\n", );
    } else if(i % 5 == 0) {
      printf("Buzz\n", );
    } else if(i % 3 == 0) {
      printf("Fizz\n", );
    } else {
      printf("^%d\n", );
    }
  }
  return 0;
}
