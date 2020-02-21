#include <time.h> 

int main()
{
	
	long long n = 100; 
	int ms;
	clock_t start, end;
	start = clock();
	
	double pay = 1.0, payda = 1.0;
	double ex = 1.0;
	double x = 1.0;
	long long k;
	
	for(k=1; k<=n; k++)
	{
		pay *= x;
		payda *= k;
		ex += pay/payda;
	}	
		
	printf("\t Sonuc e^x = %lf \n", ex);
	
	end = clock();
	printf("\t Calisma Zamani : % f", (float)(end-start)/CLK_TCK);
	
	return 0;
}
