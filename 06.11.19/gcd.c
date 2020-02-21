#include<stdio.h>

int gcd(int a,int b)
{
	if(a%b==0) 
		return b;
	else
		return gcd(b,a%b);
}

int main()
{
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);	
	
	if (a==0 && b==0) 
		printf("gcd TANIMLI DEGIL");
	else if(a==0) 
		printf("gcd(%d,%d)=%d",a,b,b);
	else if(b==0) 
		printf("gcd(%d,%d)=%d",a,b,a);
	else 
		printf("gcd(%d,%d)=%d",a,b,gcd(a,b));
	
	return 0;
}
