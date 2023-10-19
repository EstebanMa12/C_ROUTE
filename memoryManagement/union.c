#include <stdio.h>

int main(){
    union numero_letra {
        int i;
        char c;
    };
    union numero_letra x = {'A'};
    printf("x.i = %c\n", (char) x.i);
    printf("x.c = %d\n",(int) x.c);



}