#define n 100

int main()
{
	int k,t;
	int *a = (int*)calloc(n,sizeof(int));
	
	for(k=1; k<=n; k++)	
		for(t=1; t<=n; t++)		
			if(t%k == 0)			
				a[t-1]^=1;
	
	for(k=0; k<n; k++)	
		if(a[k]==1)
			printf("%d \n", k+1);
	
}
