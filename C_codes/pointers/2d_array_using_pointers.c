#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **a;
	int m;
	int n;
	int i;
	
	printf("Enter Row's : ");
	scanf("%d",&m);
	
	printf("Enter column's : ");
	scanf("%d",&n); 
	
	a = (int **) malloc(m * sizeof(int *));
	if(a==NULL)
	{
		printf("Insufficient Memory Allocation for ROW's\n");
		exit(0);
	}
	
	for(i=0; i<m; i++)
	{
		a[i] = (int *) malloc(n * sizeof(int));
		if(a[i]==NULL)
		{
			printf("Insufficient Memory Allocation for COLUMN's\n");
			exit(0);
		}
	}
	
	//WRIDE ARRAY CODE HERE
	
	for(i=0; i<m; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}
