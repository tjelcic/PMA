#include <stdio.h>

int main(void)
{
    int broj,prva,druga,treca,rez;
    printf("Unesi troznamenkasti broj:");
    scanf("%d",&broj);
    prva=broj/100;
    rez=prva*prva*prva;
    druga=(broj/10)%10;
    rez+=druga*druga*druga;
    treca=(broj%100)%10;
    rez+=treca*treca*treca;
    if (rez==broj)
        printf("%d je Armstrongov broj.",broj);
    else
        printf("%d nije Armstrongov broj.",broj);
    return 0;
}

