#include<stdio.h>
#include<time.h>
#include<math.h>

#define n 1234567891   //Asal
//#define n 1000000000   //Asal Deðil

int main()
{
	unsigned int i,kokn;
	
	clock_t start, end;
	start = clock();
	
	printf("%u Asal",n);
	if(n>2 && n%2==0)
	{
		printf(" degildir.");
		goto son;		
	}
	kokn=sqrt(n);
	for(i=3;i<=kokn;i+=2)
		if(n%i==0)
		{
			printf(" degildir.");
			goto son;
		}
    printf("dir");
son:	
	end = clock();
	printf("\n\nCalisma zamani  : %f\n\n", (float) (end - start) / CLK_TCK);		
	
	return 0;
}
