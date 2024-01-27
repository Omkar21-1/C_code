/*

	ek 'n' ghaycha ani ek 'k' ghaycha
	
	Example
	
	n=3;
	k=3;

	The results of the comparisons are below:

	a b   and or xor
	1 2   0   3  3
	1 3   1   3  2
	2 3   2   3  1
	
	For the and comparison, the maximum is 2 For the or comparison, none of the values is less than k, so the maximum is 0. 
	For the xor comparison, the maximum value less than k is 2. The function should print:

	2
	0
	2 

	S = {1,2,3}		//'n'
	
	All possible values of a and b are :
	
	1. a=1,b=2;	a&b=0;	    a|b=3;	a^b=3;
	2. a=1,b=3;	a&b=1;	    a|b=3;	a^b=2;
	3. a=2,b=3;	a&b=2;	    a|b=3;	a^b=1;
	
	o The maximum possible value of a&b i.e. also < k is 2, so we print 2 on first line.
	o The maximum possible value of a|b none of the value is < k, so we print 0 on first line.
	o The maximum possible value of a^b i.e. also < k is 2, so we print 2 on first line.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    
    int i;
    int j;
    int bin;
    int maxAND=0;
    int maxOR=0;
    int maxXOR=0;
    
    for(i=1; i<=n; i++)
    {        
        for(j=(i+1); j<=n; j++)
        {
            bin = i&j;
            if( bin < k && bin > maxAND )
            {
                maxAND = bin;
            }
        }
          for(j=(i+1); j<=n; j++)
        {
            bin = i|j;
            if( bin < k && bin > maxOR )
            {
                maxOR = bin;
            }
        }
          for(j=(i+1); j<=n; j++)
        {
            bin = i^j;
            if( bin < k && bin > maxXOR )
            {
                maxXOR = bin;
            }
        }
    }
    
    printf("%d\n",maxAND);
    printf("%d\n",maxOR);
    printf("%d\n",maxXOR);  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
