#include <stdio.h>

#define n 10

int main()
{
	int c[n+1][n+1];
	int k,t;
	
	
	for(k=0;k<=n;k++)
	{
		for(t=0;t<=k;t++)
		{
			if((k==t)||(t==0))
				c[k][t]=1;
			else
				c[k][t]=c[k-1][t-1]+c[k-1][t];
			printf("%4d",c[k][t]);
		}
		printf("\n");
	}
	
	return 0;	
}
