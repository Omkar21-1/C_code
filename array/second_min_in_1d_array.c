#include<stdio.h>
#include<stdlib.h>

int i;

void accept(int a[],int n)
{
	for(i=0; i<n; i++)
	{
		printf("Enter data : ");
		scanf("%d",&a[i]);
	}
}

void second_minimum(int a[],int n)
{
	int f_min = a[0];
	int s_min;
	
	for(i=1; i<n; i++)
	{
		if(a[i] < f_min)
		{
			f_min = a[i];
			s_min = f_min;
		}
		else
		{
			s_min = a[i];
			f_min = f_min;
		}
	}
	printf("\nSecond min : %d",s_min);
}

int main()
{
	int *a;
	int n;
	
	printf("Enter number of Elements : ");
	scanf("%d",&n);
	
	a = (int*) malloc(n * sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient Memory Allocation\n");
		exit(0);
	}
	
	accept(a,n);
	
	second_minimum(a,n);

	free(a);
	return 0;
}
