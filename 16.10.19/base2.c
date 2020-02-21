void Base2(int n)
{
	if(n<2)
		printf("%d",n);
	else
	{
		Base2(n/2);
		printf("%d", n%2);
	}
}

int main()
{
	Base2(13);
}
