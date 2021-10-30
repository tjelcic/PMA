#include <stdio.h>
#define VOLUMEN(a,b,c) (a*b*c)
#define OPLOSJE(a,b,c) (2*((a*b)+(a*c)+(b*c)))

typedef struct
{
    float a,b,c;
}Kvadar;

void op_i_vol (Kvadar k, int*po, int*pv)
{
    *po=OPLOSJE(k.a,k.b,k.c);
    *pv=VOLUMEN(k.a,k.b,k.c);
}

int main(void)
{
    int vol, op;
    Kvadar k = {10,12,11};
    op_i_vol(k,&op,&vol);
    printf("Oplosje je %d, a volumen %d", op, vol);
    return 0;
}
