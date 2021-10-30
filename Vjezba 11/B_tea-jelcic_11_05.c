#include <stdio.h>
#include <string.h>

/*koliko puta se znak pojavljuje
int count (char *str, char ch)
{
    if (!*str)
        return 0;
    else if (*str==ch)
        return 1+count(str+1,ch);
    else
        return count(str+1,ch);
}

int main (void)
{
    char ch='a';
    char *str="abrakadabra";
    printf("Slovo %c se u stringu %s pojavljuje %d puta", ch,str,count(str,ch));
    return 0;
}
*/

//trazi indeks n-tog pojavljivanja
int pojavljivanje (char string[], char c, int n, int i, int j, int cnt)
{
    i++;
    if (string[j]==c)
        cnt++;
    if (cnt==n)
        return i;
    pojavljivanje(string,c,n,i,j+1,cnt);

}

int main (void)
{
    char string[]="abrakadabra";
    char c='a';
    int n=3;
    int i=-1,j=0, cnt=0;
    int indeks=pojavljivanje(string,c,n,i,j,cnt);
    printf("%d. pojavljivanje znaka %c u stringu %s je na %d. indexu u stringu.", n,c,string,indeks);
    return 0;
}
