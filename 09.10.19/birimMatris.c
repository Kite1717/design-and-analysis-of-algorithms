#define n 3

int main()
{
	int dizi[n][n] ={1,0,0,	
					 0,1,0,
					 0,0,1
					};
	int birim=1;
	int k,t;
	for(k=0; k<n; k++)
	{
		for(t=0; t<n; t++)
		{
			if((k==t && dizi[k][t] != 1) || (k != t && dizi[k][t] != 0))
				{
					birim = 0;
					printf("Birim Matris degil");
					return 0;
				}
		}
	}
	printf("Birim Matris");
	return 1;
}
