#define n 3

int main()
{
	int k,t,i;
	
	for(k=1; k<=n; k++)	
		for(t=1; t<=n; t++)		
			for(i=1; i<=n; i++)	
				if(k != t && t!= i && k!=i)		
					printf("\t%d %d %d\n",k,t,i);	
}
