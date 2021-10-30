#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char ime_prezime[80];
    char JMBAG[80];
    char grupa;
    float rez;
}Student;

Student* prosli (Student *s,int n, int *a)
{
    int i,j=0;
    Student *niz=(Student*) malloc(n * sizeof(Student));
    if (!niz)
        return NULL;
    for (i = 0; i < n; ++i)
        if (s[i].rez >= 40)
        {
            strcpy(niz[j].ime_prezime, s[i].ime_prezime);
            strcpy(niz[j].JMBAG, s[i].JMBAG);
            niz[j].grupa = s[i].grupa;
            niz[j].rez = s[i].rez;
            j++;
        }
    *a = j;
    return niz;
}

int main (void)
{
    int n=4,a,i;
    Student studenti[4]={{"ana anic","1234",'A',40},{"ivo ivic","2345",'B',39},{"mate matic","7894",'A',59},{"sara saric","4561",'A',80}};
    Student *novi=prosli(studenti,n,&a);
    printf("Ispit su polozili:\n");
    for (i = 0; i < a; ++i)
        printf("%s %s %c %f\n", novi[i].ime_prezime, novi[i].JMBAG, novi[i].grupa, novi[i].rez);
    free(novi);
    return 0;
}
