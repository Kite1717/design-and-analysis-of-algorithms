#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,*f,k;
	
	printf("n : ");
	scanf("%d",&n);
	
	f=(int *) malloc((n+1)*sizeof(int));
	f[0]=0;
	f[1]=1;
	
	for(k=2;k<=n;k++)
		f[k]=f[k-1]+f[k-2];
	printf("F(%d)=%d\n",n,f[n]);
	
	getch();
	return 0;
}
