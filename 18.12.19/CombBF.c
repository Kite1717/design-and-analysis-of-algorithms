#define n 3

int main()
{
	int k,t;
	for(k=1; k<=n ; k++)
		for(t=1; t<=n; t++)
			if(k<t)
				printf("\t%d %d\n", k,t);
}
