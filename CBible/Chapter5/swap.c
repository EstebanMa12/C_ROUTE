#include <stdio.h>

void swap(int *px, int *py){
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}
int main(){
  int a = 1;
  int b = 2;
  printf("a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("After swap the pointers---\n");
  printf("a = %d, b = %d\n", a, b);
  return 0;
}