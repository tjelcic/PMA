#include <stdio.h>

int main(void)
{
    char ime,prezime,prvo_prezime='z',prvo_ime='z',zadnje_prezime='A',zadnje_ime='A';

    while((ime!='0') && (prezime!='0'))
    {
        printf("Unesite inicijale:");
        scanf(" %c  %c",&ime,&prezime);

        if ((prezime<prvo_prezime) && (prezime!='0') && (ime!='0'))
        {
            prvo_prezime=prezime;
            prvo_ime=ime;
        }
        if ((prezime>zadnje_prezime) && (prezime!='0') && (ime!='0'))
        {
            zadnje_prezime=prezime;
            zadnje_ime=ime;
        }
    }
    printf("%c%c\n",prvo_ime,prvo_prezime);
    printf("%c%c\n",zadnje_ime,zadnje_prezime);

    return 0;
}

