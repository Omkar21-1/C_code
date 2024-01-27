#include<stdio.h>

int multiplication_f(int,int);

int multiplication_f(int a,int b)
{
	int answer;

	answer = a*b;

	return answer;
}


int main()
{
	int multiplication,a,b;

	printf("Enter Firdt Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);

	multiplication = multiplication_f(a,b);

	printf("Multiplication of %d * %d = %d",a,b,multiplication);
	return 0;
}
