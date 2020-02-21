#include<stdio.h>
#include<time.h>
#include<math.h>

#define n 200000   // =>3

int main()
{
	unsigned int i,j,kokj;
	
	clock_t start, end;
	start = clock();
	
	printf("2 ");
	for(j=3;j<=n;j+=2)
	{
		if(j%2==0) goto son;
		kokj=sqrt(j);
		for(i=3;i<=kokj;i+=2)
			if(j%i==0) goto son;
	    printf("%d ",j);
son:;	
	}
	
	end = clock();
	printf("\n\nCalisma zamani  : %f\n\n", (float) (end - start) / CLK_TCK);		
	
	return 0;
}
