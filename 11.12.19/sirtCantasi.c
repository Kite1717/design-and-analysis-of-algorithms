#include <stdio.h>
#define b 56
#define n 4

int max(int x, int y)
{
	return (x>y)?x:y;
}

int main()
{
	int canta[n+1][b+1]={0}; 
	int agirlik[n+1]={0,3,7,3,4}; 
	int fayda[n+1]=  {0,21,35,13,5}; 
	int k,t,BB;
	
	for(k=1; k<=n; k++)
	{
		for(t=1; t<=b; t++)
		{
		 	if(agirlik[k] <= t)
				canta[k][t] = max(canta[k-1][t], fayda[k]+canta[k-1][t-agirlik[k]]);
			else
				canta[k][t] = canta[k-1][t];
			printf("%3d",canta[k][t]);
		}
		printf("\n");
	}
	
	BB= b;
	
	printf("\n\nEsya , agirlik , fayda");
	for(k=n; k>0; k--)	
		for(t=BB; t>0; t--)		
			if(canta[k][t] != canta[k-1][t])
			{
				printf("\n%3d%8d%9d",k,agirlik[k],fayda[k]);
				BB -= agirlik[k];
				break;
			}							
			
	return 0;
}
