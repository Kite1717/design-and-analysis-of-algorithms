#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define n 4

int mask[n+1],A[n+1];

void Base2(int x,int p)
{
	if(x<2)
	{
		p++;
		mask[p]=x;
	}
		
	else
	{
		Base2(x/2,p+1);
		p++;
		mask[p]=x%2;		
	}
}

int main()
{
	int i,j,k,ikin=pow(2,n);
	
	for(i=1;i<=n;i++)
		A[i]=i;
	
	for(i=0;i<ikin;i++)
	{
		for(j=1;j<=n;j++)
			mask[j]=0;
		Base2(i,0);
		for(j=1;j<=n;j++)
			if (mask[j]*A[j]) printf("%d ",mask[j]*A[j]);
		printf("\n");		
	}

	return 0;
}
