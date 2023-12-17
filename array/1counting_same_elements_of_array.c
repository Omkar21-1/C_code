#include<stdio.h>
#include<stdlib.h>

int n;			//FOR LRNGTH OF ARRAY
int i;			//USING IN LOOPS
int data;		//FOR STORING VALUE WHICH USER WANT TO CHECK HOW MANY TIMES IT REPEATED
int max;		//FOR GIVING ARRAY LENGTH TO count ARRAY


//FUNCTION DECLARATION
int length_of_array();
void accept_array_elements(int [], int);
int max_of_array(int [],int);
void count_same_elements_of_array(int [],int,int [],int);
void disp(int [],int);



//FUNCTION CODE OR FUNCTION BODY OR FUNCTION DEFINATION
int length_of_array()
{

	printf("ENTER LENGTH OF ARRAY :");
	scanf("%d",&n);
	return n;
}

void accept_array_elements(int a[],int n)
{
	for(i=0; i<n; i++)
	{
		printf("Enter Data :");
		scanf("%d",&a[i]);
	}	
}

void count_same_elements_of_array(int a[],int n,int count[],int max)
{

	for(i=0; i<n; i++)
	{
		count[a[i]]++;
	}
//	disp(count,max);

	for(i=0; i<max; i++)
	{
		if(count[i]>0)
		{
			printf("\ncount of %3d : %3d",i,count[i]);
		}
	}
	
}

int max_of_array(int a[],int n)
{

	max = a[0];
	for(i=1; i<n; i++)
	{
		if(max>a[i])
		{
			max = max;
		}
		else
		{
			max = a[i];
		}
	}
	return max+1;
}


void disp(int a[],int n)
{
	for(i=0; i<n; i++)
	{
		printf("%3d  ",a[i]);
	}
}

int main()
{
	int *a;
	//GETING LENGTH OF ARRAY FROM USER
	n = length_of_array();
	
	a = (int*) malloc(n * sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient Memory Allocation\n");
		exit(0);
	}

	//GETTING ARRAY ELEMENTS FROM USER
	accept_array_elements(a,n);

	//USER KADUN INPUT GHETOY VARUN ANI TYATLA MAXIMUM NUMBER KADHUN TI LENGTH count LA DETOY
	//ANI MG count CHYA SAGLYA ELEMENTS LA '0' NI INITILIZE KARTOY
	max = max_of_array(a,n);
	int *count;
	
	count = (int*) calloc(max , sizeof(int));
	if(count==NULL)
	{
		printf("Insufficient Memory Allocation\n");
		exit(0);
	}
	

	//COUNTING SAME ELEMENTS OF ARRAY......
	count_same_elements_of_array(a,n,count,max);
	
	free(a);
	free(count);
	
	return 0;
}
