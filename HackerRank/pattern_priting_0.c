/*
	Sample Input 0
	2
	Sample Output 0
	2 2 2
	2 1 2
	2 2 2
	
	Sample Input 1
	5
	Sample Output 1
	5 5 5 5 5 5 5 5 5 
	5 4 4 4 4 4 4 4 5 
	5 4 3 3 3 3 3 4 5 
	5 4 3 2 2 2 3 4 5 
	5 4 3 2 1 2 3 4 5 
	5 4 3 2 2 2 3 4 5 
	5 4 3 3 3 3 3 4 5 
	5 4 4 4 4 4 4 4 5 
	5 5 5 5 5 5 5 5 5
	
	Sample Input 2
	7
	Sample Output 2
	7 7 7 7 7 7 7 7 7 7 7 7 7 
	7 6 6 6 6 6 6 6 6 6 6 6 7 
	7 6 5 5 5 5 5 5 5 5 5 6 7 
	7 6 5 4 4 4 4 4 4 4 5 6 7 
	7 6 5 4 3 3 3 3 3 4 5 6 7 
	7 6 5 4 3 2 2 2 3 4 5 6 7 
	7 6 5 4 3 2 1 2 3 4 5 6 7 
	7 6 5 4 3 2 2 2 3 4 5 6 7 
	7 6 5 4 3 3 3 3 3 4 5 6 7 
	7 6 5 4 4 4 4 4 4 4 5 6 7 
	7 6 5 5 5 5 5 5 5 5 5 6 7 
	7 6 6 6 6 6 6 6 6 6 6 6 7 
	7 7 7 7 7 7 7 7 7 7 7 7 7 

*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i;
    int j;
    int N;
    if(n==1)
    {
        printf("1");
        exit(0);
    }
    
    N = n+(n-1);
    int k = N-1;;
    int **a;
    a = (int **) calloc(N , sizeof(int**));
    for(i=0; i<N; i++)
    {
        a[i] = (int *) calloc(N , sizeof(int*));
    }
    
    for(i=0; i<N; i++)
    {
        
        for(j=0; j<N; j++)
        {
            if(a[i][j]==0)
            {
                a[i][j] = n;           
            }
            if(a[j][i]==0)
            {
                a[j][i] = n;           
            }
            if(a[k][j]==0)
            {
                a[k][j] = n;           
            }
            if(a[j][k]==0)
            {
                a[j][k] = n;           
            }          
        }
        k = k-1;
        --n;
    }
     
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",a[i][j]);            
        }
        printf("\n");
    }
     
     
    for(i=0; i<N; i++)
    {
        free(a[i]);
    }
    free(a); 
      
      
      
      
    return 0;
}
