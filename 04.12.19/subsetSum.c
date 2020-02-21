#include <stdio.h>
#define b 50
#define  n 5
int max(int x, int y)
{
	return (x>y)?x:y;
}

int main()
{
	int a[n+1]={0, 1,1,4,5,9};
	int matris[n+1][b+1]={0};
	int k,t;
	
	for(k=1;k<=n;k++)
	{
		for(t=1;t<=b;t++)
		{
			if(a[k]<=t)
			{
				matris[k][t]=max(matris[k-1][t] , a[k]+matris[k-1][t-a[k]]);
				//printf("%3d",matris[k][t]);
			}
			
			else
			{
				matris[k][t]=matris[k-1][t];
				
			}
			
		    	printf("%3d",matris[k][t]);
			if(matris[k][t]==b)		return 0;
		}
	   	printf("\n");
	}
	
	return 0;
}
