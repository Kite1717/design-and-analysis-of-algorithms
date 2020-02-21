#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define m 3
#define r 2

unsigned int x[m+1]={0},i,k,b,z=0;

bool uygun(int k)
{
	i=1;
	while(i<k)
	{
		if(x[i]==x[k] || x[i] > x[k])     
			return false;
		i++;
	}
	return true;
}

void func(int n)
{
	x[1]=0;
	k=1;
	while(k>0)
	{
		x[k]++;
		while(x[k]<=n && !uygun(k))			
			x[k]++;
						
		if(x[k]<=n)
		{
			if(k==r)
			{
				z++;
				printf("%3d) ",z);
				for(b=1;b<=r;b++)				
					printf("%d ",x[b]);					
				printf("\n");
			}
			else
			{
				k++;
				x[k]=0;
			}
		}
		else k--;
	}
}

int main()
{
	func(m);
	return 0;
}
