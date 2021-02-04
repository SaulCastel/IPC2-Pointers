#include <stdio.h>

int main(void) {
  int x = 33;
  int y;
  int *p;
  p = &x;
  printf("el valor de p es %d \n", *p);
  y = *p + 10;
  printf("El valor de y es %d ", y);
  return 0;
}