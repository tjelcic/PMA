#include <stdio.h>

int main(void)
{
    float poc1,poc2,kraj1,kraj2;
    printf("Unesite pocetak prvog intervala:");
    scanf("%f",&poc1);
    printf("Unesite kraj prvog intervala:");
    scanf("%f",&kraj1);
    printf("Unesite pocetak drugog intervala:");
    scanf("%f",&poc2);
    printf("Unesite kraj drugog intervala:");
    scanf("%f",&kraj2);

    if ((poc1>=poc2)&&(poc1<kraj2)&&(kraj1>poc2)&&(kraj1<kraj2))
        printf("Presjek je %f %f", poc1,kraj1);
    else if ((poc1>=poc2)&&(poc1<kraj2)&&(kraj2>poc1)&&(kraj2<=kraj1))
        printf("Presjek je %f %f",poc1,kraj2);
    else if ((poc2>poc1)&&(poc2<kraj1)&&(kraj2>poc1)&&(kraj2<=kraj1))
        printf ("Presjek je %f %f",poc2,kraj2);
    else if ((kraj1>poc2)&&(kraj1<kraj2)&&(poc2>poc1)&&(poc2<kraj1))
        printf ("Presjek je %f %f",poc2,kraj1);
    else
        printf("Presjek je prazan skup.");
    return 0;
}
