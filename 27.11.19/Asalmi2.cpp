#include<stdio.h>
#include<time.h>

#define n 1234567891   //Asal
//#define n 1000000000   //Asal De�il

int main()
{
	unsigned int i;
	
	clock_t start, end;
	start = clock();
	
	printf("%u Asal",n);
	for(i=2;i<n;i++)
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
