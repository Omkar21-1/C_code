#include<stdio.h>
#include<stdlib.h>


int length_of_array();
void accept(int [],int [], int);

int length_of_array()
{
	int n;
	printf("Enter What Length of Array You Want :");
	scanf("%d",&n);
	return n;
}

void accept(int a[],int b[], int n)
{
	int i=0,j=0;
	for(i=0; i<n; i++)
	{
		printf("Enter Data :");
		scanf("%d",&a[i]);
		b[j] = a[i];
		++j;
	}
	printf("\n");
}




int main()
{
	int *a;
	int *b;
	int i=0,j=0;
	int n;
	int count;

	n = length_of_array();		//For Getting Length of Array
	
	a = (int *) malloc(n * sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient Memmory Allocation\n");
		exit(0);
	}
	
	b = (int *) malloc(n * sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient Memmory Allocation\n");
		exit(0);
	}	
	
	
	
	accept(a,b,n);			//Getting Element in Array
	

	for(i=0; i<n; i++)
	{
		count=0;
		for(j=0; j<n; j++)
		{
			if(a[i]==b[j])
			{
				count=count+1;
				b[j]=0;
			}
		}  
		if(count>=2)
		{
			printf("Count of %d is :%d\n",a[i],count);
		}
		else if(count>=1)
		{
			printf("count of %d is :1\n",a[i]);
		}
	}
	printf("\n");	


	free(a);
	free(b);

	return 0;
}

