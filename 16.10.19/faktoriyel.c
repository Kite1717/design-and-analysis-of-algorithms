int fak(long long int n)
{
	if(n==0)
		return 1;
	else
		return n*fak(n-1);				
}

int main()
{
	printf("Sonuc : %lld",fak(10));	
}
