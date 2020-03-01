#include<stdio.h> 
  
// A utility function that returns maximum of two integers 
int max(int a, int b) { return (a > b)? a : b; } 
  
// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int capacity, int weights[], int values[], int size) 
{ 
   int i, j; 
   int K[size+1][capacity+1]; 
   
  
   // Build table K[][] in bottom up manner 
   for (i = 0; i <= size; i++) 
   { 
		if(i == 0) printf("   0->>");
		else  printf ("%4d->>",weights[i-1]);
		
       for (j = 0; j <= capacity; j++)  
       { 
           if (i==0 || j==0) 
               K[i][j] = 0; 
               
           else if (weights[i-1] <= j) 
                 K[i][j] = max(values[i-1] + K[i-1][j-weights[i-1]],  K[i-1][j]); 
                 
           else
                 K[i][j] = K[i-1][j]; 
        
        printf("%4d",K[i][j]);
       } 
       printf("\n");
   } 



    int counter = 0;
    //applied back tracking process
    while (size > 0 && capacity > 0)
    {

        if (K[size][capacity] != K[size-1][capacity])
        {
            counter++;
             printf("%d  : %d\n",weights[size -1], values[size -1]);
            capacity -= weights[size-1];
        }
        size --;
    }



return K[size][capacity]; 
    
} 
  
int main() 
{ 
    int values[] = {605, 302, 303}; 
    int weights[] = {20, 5, 10}; 
    int  capacity = 20; 
    int size = sizeof(values)/sizeof(values[0]); 
    printf("%d", knapSack(capacity, weights, values, size)); 
    return 0; 
} 
