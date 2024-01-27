/*
	Question's :-
	
		1.Write a C program to calculate the average of elements in an array.
		2.Implement a C program to find the largest element in an array.
		3.Create a program to count the number of even and odd elements in an array.
		4.Write a C function to check if a given element is present in an array.
		5.Develop a program to reverse the elements of an array.
		6.Implement a C program to sort elements in an array in ascending order.
		7.Write a function to find the second smallest element in an array.
		8.Create a program to remove duplicate elements from an array.
		9.Implement a C function to perform a linear search in an array.
		10.Write a program to find the frequency of each element in an array.
*/

#include<stdio.h>
#include<stdlib.h>

//DECLARING A GLOBAL VARIABLE 
int i;
int n;
int max;
int min;
int element;
int sr_no;
float answer;
int ans;

//FUNCTION PROTOTYPE or FUNCTION DECLARATION
void menu();
int length_of_array();
void accept_elements_of_array(int [],int);
void display_array_elements(int [],int);

float avg_of_array_elements(int [],int);
int largest_element_in_array(int [],int);
void count_of_even_and_odd_elements(int [],int);
int check_given_element_is_present_in_array_or_not(int [],int);
void reverse_array_elements(int [],int);
void sort_array_elements_in_ascending_order(int [],int,int [],int);
int second_smallest_element_in_array(int *,int,int [],int);
void remove_duplicate_elements_from_array(int [],int,int [],int);
int linear_search_in_array(int [],int);
void frequency_of_each_elements(int [],int,int [],int);



//FUNCTION BODY or FUNCTION CODE or FUNCTION DEFINATION
//______________________________________________________________________________________________________________________________________
int length_of_array()
{
	int array_length;
	printf("\nEnter Length of Array Elements :");
	scanf("%d",&array_length);
	return array_length;
}

void accept_elements_of_array(int array[],int length)
{
	for(i=0; i<length; i++)
	{
		printf("Enter %d Array Element : ",i+1);
		scanf("%d",&array[i]);
	}
}

void display_array_elements(int array[],int length)
{
	printf("\nArray Elements : ");
	for(i=0; i<length; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}

void menu()
{
	printf("\n1.Calculate the average of elements in an array.\n2.Find the largest element in an array.\n3.Count the number of even and odd elements in an array.\n4.Check if a given element is present in an array.\n5.Reverse the elements of an array.\n6.Sort elements in an array in ascending order.\n7.Find the second smallest element in an array.\n8.Remove duplicate elements from an array.\n9.Linear search in an array.\n10.Frequency of each element in an array.\n");
}

//________________________________________________________________________________________________________________________________________

/*
 =================
 QUESTIONS SOLVING 
 =================
 */

float avg_of_array_elements(int a[],int n)
{
	float avg;
	float sum = 0;
	
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
	}

	avg = sum/n;
	
	return avg;
}

int largest_element_in_array(int a[],int n)
{

	max = a[0];
	for(i=1; i<n; i++)
	{
		max = max>a[i] ?max :a[i];	
	}
	//printf("Max : %d",max);
	return max+1;
}

void count_of_even_and_odd_elements(int a[],int n)
{
	int even_count=0;
	int odd_count=0;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			++even_count;
		}
		else
		{
			++odd_count;
		}
	}
	printf("\nCount of Even Elements :%d\nCount of Odd Elements :%d",even_count,odd_count);
}

int check_given_element_is_present_in_array_or_not(int a[],int n)
{
	
	printf("\nEnter Element to Check it is Present in an Array or Not :");
	scanf("%d",&element);

	for(i=0; i<n; i++)
	{
		if(element==a[i])
		{
			return 1;
		}
	}

	return 0;
}

void reverse_array_elements(int a[],int n)
{
	printf("\nReverse of Array Elements : ");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}

void sort_array_elements_in_ascending_order(int a[],int n,int count[],int max)
{
	
	printf("\nSorting Array Elements in Ascending Order :");

	for(i=0; i<n; i++)
	{
		count[a[i]]++;
	}
	for(i=0; i<max; i++)
	{
		if(count[i]>0)
		{
			printf(" %d",i);
			if(count[i]>1)
			{
				printf("..");
			}
		}
	}
}

int second_smallest_element_in_array(int *a,int n,int count[],int max)
{	
			/*	int s_min;
				for(i=0; i<n; i++)
				{
					count[a[i]]++;
				}
				
				for(i=0; i<max; i++)
				{
					if(count[i]>0)
					{				
						*a = i;
						a++;
					}
				}
				s_min = a[1];		*/
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
	return s_min;
}

void remove_duplicate_elements_from_array(int a[],int n,int count[],int max)
{

	for(i=0; i<n; i++)
	{
		count[a[i]]++;
	}
	for(i=0; i<n; i++)
	{
		if(count[a[i]]>1)
		{
			a[i]=0;
		}
		if(a[i]>0)
		{
			printf("%d ",a[i]);
		}
	}

	//display_array_elements(count,max);
	display_array_elements(a,n);
}

int linear_search_in_array(int a[],int n)
{
	printf("\nEnter Which Element of Index You Want :");
	scanf("%d",&element);

	for(i=0; i<n; i++)
	{
		if(element==a[i])
		{
			return i;
		}
	}
	return -1;
}

void frequency_of_each_elements(int a[],int n,int count[],int max)
{
	for(i=0; i<n; i++)
	{
		count[a[i]]++;
	}
	for(i=0; i<max; i++)
	{
		if(count[i]>0)
		{
			printf("\nFrequency of %d : %d",i,count[i]);
		}
	}
}


//MAIN FUNCTION entry point function
int main()
{
	int stop;
	while(1)
	{
		//GETTING SIZE OF ARRAY AND FILLING ALL ELEMENTS OF ARRAY
		int *a;
		n = length_of_array();
		
		a = (int *) malloc(n * sizeof(int));
		if(a==NULL)
		{
			printf("Insufficient Memmory Allocation\n");
			exit(0);
		}
		
		accept_elements_of_array(a,n);

		//DISPLAYING ALL ELEMENTS OF ARRAY & CREATED FOR FINDING LOGICAL ERROR
	//	display_array_elements(a,n);

		max = largest_element_in_array(a,n);
		int *count;
		
		count = (int*) calloc(n , sizeof(int));
		if(count==NULL)
		{
			printf("Insufficient Memory Allocation\n");
			exit(0);
		}
		

		menu();
 
		printf("\nEnter Sr.No : ");
		scanf("%d",&sr_no);
	
		switch(sr_no)
		{
			case 1:
				answer = avg_of_array_elements(a,n);
				printf("\nAverage of Elements in an Array : %.2f",answer);
				break;
			case 2:
				ans = largest_element_in_array(a,n);
				printf("\nLargest Elements in an Array :%d",ans);
				break;
			case 3:
				count_of_even_and_odd_elements(a,n);
				break;
			case 4:
				ans = check_given_element_is_present_in_array_or_not(a,n);
					if(ans)
					{
						printf("\nYes. The Given Element is Present in Array Element");
					}
					else
					{
						printf("\nNo. The Given Element is Not Present in Array Element");
					}
				break;
			case 5:
				reverse_array_elements(a,n);
				break;
			case 6:
				sort_array_elements_in_ascending_order(a,n,count,max);
				break;	
			case 7:
				ans = second_smallest_element_in_array(a,n,count,max);
				printf("\nSecond Smallest Element in Array :%d",ans);
				break;
			case 8:
				remove_duplicate_elements_from_array(a,n,count,max);
				break;
			case 9:
				ans = linear_search_in_array(a,n);
				printf("\nIndex of Entered Element : %d",ans);
				break;
			case 10:
				frequency_of_each_elements(a,n,count,max);
				break;
			default:
				printf("Please Select A Valid Sr.No!!!\n");

		}
		printf("\n\n\nEnter Negative Number To Stop Program :");
		scanf("%d",&stop);
		
		if(stop<0)
		{
			free(a);
			free(count);
			exit(0);	
		}
		
		free(a);
		free(count);
		
	}
	return 0;
}
