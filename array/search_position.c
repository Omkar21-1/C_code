#include<stdio.h>
#include<stdlib.h>

int length_of_array();
void accept(int [],int);
int get_number_to_check();
void search_position(int [],int ,int);


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
	printf("\nEnter Data Which Position You Want To See :");
	scanf("%d",&data);
	return data;
}

void search_position(int a[], int n, int data)
{
	int i;
	int count=0;
	int sr_no=1;

	for(i=0; i<n; i++)
	{
		if(data==a[i])
		{
			printf("%d) Position of %d : %d\n",sr_no,data,i);
			++sr_no;
		}
	}
	for(i=0; i<n; i++)
	{
		if(data!=a[i])
		{
			++count;
		}
	}
	if(count==n)
	{
		printf("1) Position of %d : -1\n",data);
	}

}	


int main()
{
	int *a;
	int n;
	int data;

	n = length_of_array();
	
	
	a = (int*) malloc(n * sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient Memory Allocation\n");
		exit(0);
	}

	accept(a,n);

	data = get_number_to_check();

	search_position(a,n,data);

	free(a);
	
	return 0;
}
