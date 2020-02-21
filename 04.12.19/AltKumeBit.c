#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define n 4

int main()
{
	int i,k,iki_n=pow(2,n),sayi,kume[n+1]={0};
	
	for(k=1;k<=n;k++)
		kume[k]=k;

	for(k=0;k<iki_n;k++)
	{
		sayi=k;
		i=0;
		while(sayi>0)
		{
			i++;
			if(sayi&1) printf("%d ",kume[i]);
			sayi=sayi>>1;
		}
		printf("\n");		
	}
}
