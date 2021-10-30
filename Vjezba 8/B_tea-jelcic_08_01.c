#include <stdio.h>

int anagram (char prva[], char druga [])
{
    int niz1[26]={0}, niz2[26]={0}, c=0;
    while (prva[c] != '\0')
    {
        niz1[prva[c]-'a']++;
        c++;
    }
    c = 0;
    while (druga[c] != '\0')
    {
        niz2[druga[c]-'a']++;
        c++;
    }
    for (c = 0; c < 26; c++)
    {
        if (niz1[c] != niz2[c])
            return 0;
    }
    return 1;
}

int main (void)
{
    char prva[100], druga[100];
    printf("Unesi dvije rijeci:");
    gets(prva);
    gets(druga);
    if (anagram(prva,druga))
        printf("rijeci su anagrami");
    else
        printf("rijeci nisu anagrami");
    return 0;
}
