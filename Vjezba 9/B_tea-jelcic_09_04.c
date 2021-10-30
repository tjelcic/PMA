#include <stdio.h>

struct vrijeme
{
    int h;
    int m;
    int s;
};

int razlika(int a, int b)
{
    return a-b;
}

int main(void)
{
    struct vrijeme v={2,30,15};
    struct vrijeme v1={1,25,10};
    int a=v.s+(v.m*60)+(v.h*3600);
    int b=v1.s+(v1.m*60)+(v1.h*3600);
    int rez=razlika(a,b);
    int h=rez/3600;
    int m=(rez -(3600*h))/60;
    int s=(rez -(3600*h)-(m*60));
    printf("Razlika je %d h %d m %d s",h,m,s);
    return 0;
}
