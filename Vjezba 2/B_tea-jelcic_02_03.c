#include <stdio.h>

int main(void)
{
    int a,b,m,n,i;
    printf("Unesite interval:");
    scanf("%d %d", &a, &b);
    printf("Unesite dva cijela broja:");
    scanf("%d %d", &m,&n);

    for(i=a;i<=b;i++)
    {
        if (i%m==0 && i%n==0)
            printf("FizzBuzz\n");
        else if (i%m==0)
            printf("Fizz\n");
        else if (i%n==0)
            printf("Buzz\n");
        else
            printf("%d\n",i);
    }
    return 0;

}
