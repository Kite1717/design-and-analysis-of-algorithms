//Erastotenes Eleði

#include<stdio.h>
#include<time.h>
#include<math.h>

#define n 200000  // =>3

int main()
{
	unsigned int i,j,a[n+1]={0};
	
	clock_t start, end;
	start = clock();
	
	for(j=2;j<=n;j++)
		if(a[j]==0)
		{
			printf("%d ",j);
			for(i=2*j;i<=n;i+=j) a[i]=1;
		}
	
	end = clock();
	printf("\n\nCalisma zamani  : %f\n\n", (float) (end - start) / CLK_TCK);		
	
	return 0;
}
