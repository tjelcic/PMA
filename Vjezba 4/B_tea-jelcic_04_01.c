#include <stdio.h>

void isp_pot(int n,int k)
{
    int prod=k, pot=0, i, zbr = 0;
	if ((k >= 2) && (k <= 16) && (n>0))
	{
		while (prod < n)
		{
			prod *= k;
			pot++;
		}
		while (pot >= 0)
		{
		    prod = k;
		    if (pot==0)
		        prod = 1;
		    else if (pot == 1)
		        prod = k;
		    else
		    {
		        for(i = 1; i < pot; i++)
		            prod *= k;
		    }
		    while (1)
		    {
		        if ((n - prod) >= 0)
		        {
		            n -= prod;
		            zbr++;
		        }
		        else
		        {
		            if (zbr)
		                printf("%d*%d^%d",zbr,k,pot);
		            if (!zbr)
		            {
		                pot--;
		                break;
		            }
		            if (n)
		                printf("+");
		            zbr = 0;
		            pot--;
		            break;
		        }
		    }
		}
	}
	return;
}

int main(void)
{
    int n,k;
    printf("Unesite broj n:");
    scanf("%d",&n);
    printf("Unesite bazu:");
    scanf("%d",&k);
    isp_pot(n,k);
    return 0;
}
