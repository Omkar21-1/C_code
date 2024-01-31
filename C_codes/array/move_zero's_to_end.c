#include<stdio.h>
#include<stdlib.h>

void accept(int* a, int n) 
{
	int i;
	for(i=0; i<n; ++i) 
	{
		scanf("%d",a[i]);
	}
}

void shift_zeros_to_end(int *a, int n)
{
	int i=0;
	int not_zero=0;
	int temp;
	for(i=0; i<n; ++i) 
	{
		if(a[i]!=0) 
		{
			temp = a[i];
			a[i] = a[not_zero];
			a[not_zero] = a[i];
			++not_zero;
		}
	}
}



void display(int* a, int n) 
{
	int i;
	for(i=0; i<n; ++i) 
	{
		printff("%d ",a[i]);
	}
}


int main() 
{
	int *a;
	int n = 4;
	a = (int*)malloc(n * sizeof(int));
	if(a==NULL)
	{
		exit(0);
	}
	accept(a,n);
	display(a,n);
	
	shift_zeros_to_end(a,n);
	
	display(a,n);
	
	
	return 0;
}