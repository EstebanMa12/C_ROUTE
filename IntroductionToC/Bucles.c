#include <stdio.h>
// BUCLES:
//      - for
//      - while
//      - do while

// FOR: The for statement allows you to execute a block of code repeatedly.
// SINTAX:
// for ( init; condition; increment ) {
//    statement(s);
// }

// WHILE: The while statement allows you to execute a block of code repeatedly as long as a condition is true.
// SINTAX:
// while (condition) {
//   // code block to be executed
// }

// DO WHILE: The do...while statement allows you to execute a block of code repeatedly until a certain condition is met.
// SINTAX:
// do {
//   // code block to be executed
// }
// while (condition);
int main(){
    printf("Bucle while:\n");
    bucle_while(10);
    printf("Bucle for:\n");
    bucle_for(10);
    printf("Bucle do while:\n");
    bucle_do_while(10);
    
    return 0;
}

void bucle_while(int number){
  int i = 0;
    while ( i < number){
        printf("%d\n", i);
        i++;
    }
}

void bucle_for(int number){
    for (int i = 0; i < number; i++){
        printf("%d\n", i);
    }
}

void bucle_do_while(int number){
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < number);
}