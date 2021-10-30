#include <stdio.h>

int max_avg (char datoteka [])
{
    FILE* fp=fopen(datoteka,"r");
    if (fp==NULL)
        return NULL;
    int ch,a,b,c,d,cnt=0;
    float max_red=0, max=0;
    while((ch=fgetc(fp))!=EOF)
    {
        fscanf(fp,"%d %d %d %d",&a,&b,&c,&d);
        max_red=(a+b+c+d)/4;
        if (max_red>max)
        {
            max=max_red;
            cnt++;
        }
    }
    fclose(fp);
    return cnt;
}

int main (void)
{
    char datoteka[]={"brojevi.txt"};
    int red=max_avg(datoteka);
    printf("U %d. redu se nalaze brojevi sa najvecim prosjekom", red);
    return 0;
}
