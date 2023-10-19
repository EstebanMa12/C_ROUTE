#include<stdio.h>

struct coordenada {
    int x;
    int y;
};

union punto {
    int v[2];
    struct coordenada co;
};


int main()
{
    union punto p;
    p.co.x=10;
    p.co.y=20;
    printf("Using the structure: %i %i\n",p.co.x, p.co.y); //10 20
    printf("Usinf the vector:    %i %i\n",p.v[0],p.v[1]);  //10 20
    return 0;
}