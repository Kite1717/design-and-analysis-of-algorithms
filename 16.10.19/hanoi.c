void Hanoi(int n, char K1,char K2, char K3)
{
	if(n==1)
		printf("%c --> %c\n",K1,K3);
	else
	{
		Hanoi(n-1, K1,K3,K2);
		printf("%c --> %c\n",K1,K3);
		Hanoi(n-1, K2,K1,K3);
	}
}

int main()
{
	Hanoi(3,'A','B','C');
}
