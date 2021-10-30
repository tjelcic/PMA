#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned godina (int dan, int mj, int god)
{
    unsigned br_god;
    if (mj<5)
        br_god=2021-god;
    else if (mj==5 && dan<=17)
        br_god=2021-god;
    else
        br_god=2020-god;

    return br_god;
}

int main (void)
{
    int dan,mj,god;
    char string[]="23.5.1986";
    sscanf(string,"%d.%d.%d",&dan,&mj,&god);
    unsigned brgod=godina(dan,mj,god);
    printf("Osoba ima %u godina", brgod);
    return 0;
}


