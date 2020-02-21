#define n 10

int main()
{
	int dizi[n]={5,6,4,8,11,3,2,7,1,10};
	int min=dizi[0];
	int k;
	for(k=0; k<n; k++)
	{
		if(min > dizi[k])
			min = dizi[k];
	}
	printf("Min eleman: %d",min);
}
