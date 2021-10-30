#include <stdio.h>

int check(char c)
{
    int n;
    switch(c)
    {
    case 'a'...'z':
        n=1;
        break;
    case 'A'...'Z':
        n=2;
        break;
    case '0'...'9':
        n=3;
        break;
    default:
        n=0;
    }
return n;
}

int main(void)
{
    char c;
    int n,kv;
    while (c!='.')
    {
        printf("Unesi znak:");
        scanf(" %c",&c);
        if (check(c)==1)
            printf("malo\n");
        else if (check(c)==2)
            printf("veliko\n");
        else if (check(c)==3)
        {
            n=c-'0';
            kv=n*n;
            printf("%d\n",kv);
        }
        else
            printf("ni slovo ni znamenka\n");
    }
    return 0;
}
