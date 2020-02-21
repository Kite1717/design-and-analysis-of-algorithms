#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a;
	int x,n,t;
	
	printf("Sirasiyla x ve n degerlerini giriniz :  ");
	scanf("%d %d", &x, &n);
	
	a = (int *) calloc(n, sizeof(int));
	for(t=1; t<=n; t++) 	    
	    scanf("%d", &a[t]);
    
    printf("\n A Dizisi Elemanlari\n");
	for(t=1; t<=n; t++)
	    printf("%4d", a[t]);	
	
	
	int toplam = a[n];
	int k;
	
	for(k=1;k<n;k++)	
		toplam =a[n-k] + x*toplam;
	
	printf("\n\n Toplam : %d",toplam);
}
