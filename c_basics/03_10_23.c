#include<stdio.h>
int main()
{
	int n,ans,i,j;
	printf("enter a range");
	scanf("%d",&n);
ans=0;
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			for(j=1; j<=i; j++)
			{
				ans = ans+j;
				printf("%d\n",j);
			}
		}
	}


	return 0;
}
