#include<stdio.h>
int multiplication_f(int,int);
int multiplication_f(int a,int b)
{
	int answer;
	answer=a*b;
	return answer;
}

int main()
{
	int first_num,second_num,multiplication;
	
	printf("Enter First Nmuber :");
	scanf("%d",&first_num);

	printf("Enter Second Number :");
	scanf("%d",&second_num);

	multiplication = multiplication_f(first_num,second_num);

	printf("Multiplication of given numbers :%d",multiplication);
	return 0;
}
