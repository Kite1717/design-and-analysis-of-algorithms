#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define n 10
#define r 2


int *deger;
int i,j,k;

int ikilik(int b)
{
	int top=0,basamak=1;
	while(b!=0)
	{
		top+=(b%2)*basamak;
		b/=2;
		basamak*=10;
	}
	return top;
}

int main()
{
	int veriSeti[n+1]= {'b', 1,0,1,1,1,0,1,1,0,1};
	int diziBoyu = pow(2,r);
	
	deger = (int*)calloc(diziBoyu,sizeof(int));
	for(i=1; i<=diziBoyu; i++)
		deger[i] = 0;
				
	for(k=n; k>=r; k--)
	{
		j=0;
		for(i=1;i<=r;i++)
			j+=(pow(2,i-1))*veriSeti[k-i+1];
		deger[j]++;
	}			
		
	printf("Veri Seti\n\n");
	for(k=1; k<=n; k++)
		printf("%d ", veriSeti[k]);	
	
	printf("\n\n");
		
	for(k=0; k<diziBoyu; k++)
		if(deger[k] > 0)
			printf("Eleman=%02d \t Onluk Taban Karsiligi=%d \t Adet=%d \n",ikilik(k),k,deger[k]);
						
	return 0;		
}
