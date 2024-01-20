/*
Q. Accept any n numbers and display its max.

n=3

enter data : 10
enter data : 27
enter data : 6

Output:
Maximum : 27
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,data,max,temp1,temp2;
	max=0;
	temp1=-1;
	temp2=0;

	printf("How Many Numbers You Want to Enter :");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Please Enter A Positive Number!!!\n");
		exit(0);
	}
	
	for(i=1; i<=n; i++)
	{
		printf("%d) Enter Data :",i);
		scanf("%d",&data);

		if(temp1==-1)
		{
			temp1=data;
		}
		else if(temp1!=data)
		{
			temp2=1;
		}

		max = max > data ?max :data;
										     
	}
	
	if(temp2==0)
	{
		printf("All Numbers Are Equals!!!\n");
		exit(0);
	}
	printf("-----------------\n");
	printf("          Max :%d\n",max);

	return 0;
}
