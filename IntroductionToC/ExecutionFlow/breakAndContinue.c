#include <stdio.h>

// Execution flow, break and continue
// The execution flow of a program is the order in which the instructions are executed. The execution flow of a C program is sequential, that is, the instructions are executed one after another in the order in which they appear in the program.
//
// The break statement is used to exit a loop before its natural ending.
//
// The continue statement is used to skip the rest of the instructions in the loop and start the next iteration.
//
// The break and continue statements can be used with any of the loop types.
//

void search(int value, int array[], int size) {
  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      printf("Value %d found at index %d\n", value, i);
      break;
    }
  }
}
void print_odd_numbers(int array[], int size) {
  for (int i = 0; i < size; i++) {
    if (array[i] % 2 != 0) {
      continue; // skip even numbers
    }
    printf("%d \n", array[i]);
  }
}

int main() {
  int valores[] = {5,14,9,6,11,19,17,6,9,8};
  int count = 10;
  for (int i = 0; i < count; i++) {
    printf("Valores [%d] = %d \n",i,valores[i]);
  }
  
  search(11, valores, count);
  search(7, valores, count);
  print_odd_numbers(valores,10);
  
  return 0;
}
