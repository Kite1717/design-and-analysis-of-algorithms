#include<stdio.h>
#include<time.h>

#define   n 1234567891   //Asal
//#define n 1000000000   //Asal Deðil

int main()
{
	unsigned int i,bs=0;
	
	clock_t start, end;
	start = clock();
	
	for(i=1;i<=n;i++)
		if(n%i==0) bs++;
	printf("%u Asal",n);
	if(bs==2) printf("dir");
	else printf(" degildir.");
	
	end = clock();
	printf("\n\nCalisma zamani  : %f\n\n", (float) (end - start) / CLK_TCK);		
	
	return 0;
}
