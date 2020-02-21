#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define uzunlukBirinci 4
#define uzunlukIkinci 6
	
char birinci[] = "BAKU"; 
char ikinci[] = "ABAKUS";

int main()
{	
	int matris[uzunlukBirinci+1][uzunlukIkinci+1]={0};		
	int k,t;
	int max=0;
	
	for(k=1; k<=uzunlukBirinci; k++)
	{
		
		for(t=1; t<=uzunlukIkinci; t++)
		{
		
			if(birinci[k-1]==ikinci[t-1])
				matris[k][t]= matris[k-1][t-1] + 1;
			else
				matris[k][t] = 0;
			printf("%3d", matris[k][t]);
		}
		printf("\n");
	}	
	
	for(k=1; k<=uzunlukBirinci; k++)	
		for(t=1; t<=uzunlukIkinci; t++)
			if(matris[k][t] > max)
				max = matris[k][t];		
		
	
	printf("\n\nEslesen toplam karakter sayisi: %d",max);
}
