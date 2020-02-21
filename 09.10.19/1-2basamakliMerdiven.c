int main()
{
	int f1=1, f2=2, f3=0, k, n;
	scanf("%d",&n);
	
	if(n>2)
	{
		for(k=0; k<n-2; k++)
		{
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
		}
	}	
	
	else 
	{
		printf("%d", n);
		return 0;
	}
		
	printf("%d", f3);
}
