#include <stdio.h>
#include<stdlib.h>

int main() {

	int *a;
	
	
	a = (int *) malloc(2 * sizeof(int));
	
	printf("%d\n",sizeof(a));
    
    return 0;
}
