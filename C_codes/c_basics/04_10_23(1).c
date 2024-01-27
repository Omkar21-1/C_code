/*
Q. Accept any n numbers and display no. of odd & even
int ocnt=0, eccnt=0;
n=3
enter data : 10
enter data : 27
enter data : 6
Output:
---------
ODD : 1
EVEN: 2
*/   
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,ocnt,ecnt,n,cnt;
	ecnt=0;
	ocnt=0;

	
	printf("Enter How Many Numbers You Want To Enter :");	
	scanf("%d",&n);

	if(n<0)
	{
		printf("Enter a Positive Number!!!!\n");
		exit(0);
	}

	for(i=2; i<=n+1; i++)
	{
		printf("%d) Enter data : ",i-1);
		scanf("%d",&cnt);

		if(cnt%i==0 && cnt!=i)
		{
			ecnt = ecnt+1;
		}
		else
		{
			ocnt = ocnt+1;
		}
	}
	printf("------------------\n");
	printf("         even : %d\n",ecnt);
	printf("         odd  : %d\n",ocnt);




	return 0;
}
