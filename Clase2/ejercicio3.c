#include <stdio.h>

int main(void) {
  int value = 18;
  int *ptr1, *ptr2;
  ptr1 = &value;
  ptr2 = ptr1;
  printf("la dirección de memoria de de ptr2 = %p", ptr2);
  return 0;
}