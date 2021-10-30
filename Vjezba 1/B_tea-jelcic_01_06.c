#include <stdio.h>

int main(void)
{
    int iznos, iznosnovi, jedna, dvi, pet;
    printf("Unesite iznos u kunama:");
    scanf("%d",&iznos);
    iznosnovi=iznos;
    pet=iznosnovi/5;
    iznosnovi=iznosnovi%5;
    dvi=iznosnovi/2;
    iznosnovi=iznosnovi%2;
    jedna=iznosnovi/1;
    printf("Za iznos %d kuna treba nam %d kovanica od 5 kuna, %d kovanica od dvije kune, %d kovanica od jedne kune.", iznos, pet, dvi, jedna);
    return 0;

}
