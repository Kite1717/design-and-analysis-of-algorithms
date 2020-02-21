#include <stdio.h>
#define max 1000
#define n 4
#define m 4

int d[n+1][m+1]={
				{0,0,0,0,0},
				{0,0,2,100,4},
				{0,5,max,2,7},
				{0,max,9,3,1},
				{0,13,2,1,0}
				};
int a[n+1][m+1]={0};

int min(int x,int y)
{
	return x<y?x:y;
}


int main()
{
	int k,t;
	for(k=1;k<=n;k++)
	{
		for(t=1;t<=m;t++)
		{
			if(k>1 && t>1)
				a[k][t]=min(a[k-1][t],a[k][t-1])+d[k][t];
			else if(k==1)
				a[k][t]=a[k][t-1]+d[k][t];
			else if(t==1)
				a[k][t]=a[k-1][t]+d[k][t];
			printf("%5d",a[k][t]);
			
		}
		printf("\n");
	}
	
	if(a[n][m]<max)
		printf("\nsonuc = %d",a[n][m]);
	else 
		printf("\nsonuc imkansiz");
			
	return 0;
}
