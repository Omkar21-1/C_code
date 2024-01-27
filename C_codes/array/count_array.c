#include<stdio.h>
#include<stdlib.h>

int length_of_array();
void accept(int [],int);
int get_number_to_check();
void count_same_elements_of_array(int [],int ,int);


int length_of_array()
{
	int n;
	printf("Enter What Length of Array You Want :");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Length of Array Should be Greater Than \"ZERO\" !!!");
		exit(0);
	}
	return n;
}

void accept(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Enter Data :");
		scanf("%d",&a[i]);
	}
	printf("\n");
}

int get_number_to_check()
{
	int data;
	printf("\nEnter Data You Want to Count it :");
	scanf("%d",&data);
	return data;
}

void count_same_elements_of_array(int a[], int n, int data)
{
	int i;
	int count=0;
	for(i=0; i<n; i++)
	{
		if(data==a[i])
		{
			++count;
		}
	}
	printf("Count of %d : %d \n",data,count);
}

int main()
{
	int *a;
	int n;
	int data;

	n = length_of_array();
	
	a = (int *) malloc(n * sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient Memmory Allocation\n");
		exit(0);
	}

	accept(a,n);

	data = get_number_to_check();

	count_same_elements_of_array(a,n,data);

	free(a);
	
	return 0;
}
