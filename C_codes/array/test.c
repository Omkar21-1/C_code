#include<stdio.h>
#include<stdlib.h>


int i=0;
int j=0;

/* FUNCTION CODE */

int get_rows()
{
	int row;
	printf("Enter How Many Row's : ");
	scanf("%d",&row);
	return row;
}

int get_columns()
{
	int column;
	printf("Enter How Many Column's : ");
	scanf("%d",&column);
	return column;
}


int main()
{
	int m;			/* using for how many rows */
	int n;			/* using for how many columns */
	
	m = get_rows();
	n = get_columns();
	
	int **a1;
	
	a1 = (int**) malloc(m * sizeof(int));
	if(a1==NULL)
	{
		printf("\nInsufficient Memory Allocation\n");
		exit(0);
	}
	
	for(i=0; i<n; i++)
	{
		a1[i] = (int*) malloc(n * sizeof(int));
		if(a1[i]==NULL)
		{
			printf("\nInsufficient Memory Allocation\n");
			exit(0);
		}
	}
	
	
	printf("\nAccept Array :\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter Data [%d][%d] : ",i,j);
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Display array :\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%lu \t",&a1[i][j]);
		}
		printf("\n\n");
	}
	
	
	

	

	
	for(i=0; i<n; i++)
	{
		free(a1[i]);
	}
	free(a1);	
	


	return 0;
}




















