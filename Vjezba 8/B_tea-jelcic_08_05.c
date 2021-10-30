#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* novi(char prvi[], char drugi[], char treci[])
{
    int len1=strlen(prvi), len2=strlen(drugi), len3=strlen(treci);
    char *novi=(char*)malloc((len1+len2+len3)*1);
    if (novi==NULL) return 0;
    if (len1<len2 && len1<len3)
        novi=strcat(drugi,treci);
    else if (len2<len1 && len2<len3)
        novi=strcat(prvi,treci);
    else
        novi=strcat(prvi,drugi);
    return novi;
}

int main(void)
{
    char prvi[100]="jasamdulji", drugi[100]="jasamjosduljiiiiiiii", treci[100]="jasamkraci";
    char *novistring=novi(prvi,drugi,treci);
    puts(novistring);
    free(novistring);
    return 0;
}
