#include<stdio.h>

int addition_f(int,int);
int substraction_f(int,int);
int multiplication_f(int,int);
//float division_f(float,float);

int addition_f(int a,int b)
{
	int answer;
	answer=a+b;
	return answer;
}

int substraction_f(int a,int b)
{
	int answer;
	answer=a-b;
	return answer;
}

int multiplication_f(int a,int b)
{
	int answer;
	answer=a*b;
	return answer;
}
/*
float division_f(float a,float b)
{
	float answer;
	answer=a/b;
	return answer;
}
*/

int main()
{
	int first_num,second_num,addition,substraction,multiplication;
//	float division;
	char ch;

	printf("CAlCULATOR\n");

	printf("Enter First Nmuber :");
	scanf("%d",&first_num);

	getchar();
	printf("(=,-,*,) :");
	scanf("%c",&ch);

	printf("Enter Second Number :");
	scanf("%d",&second_num);

	switch(ch)
	{
		case '+':
			addition = addition_f(first_num,second_num);
			printf("Addition of given numbers :%d\n",addition);
			break;
		case '-':
			substraction = substraction_f(first_num,second_num);
			printf("Substraction of given numbers :%d\n",substraction);
			break;
		case '*':
			multiplication = multiplication_f(first_num,second_num);
			printf("Multiplication of given numbers :%d\n",multiplication);
			break;
		/*
		case '/':
			division = division_f(first_num,second_num);
			printf("Division of given numbers :%.2f\n",division);
			break;
		*/

		default :
			printf("Wrong Input!!!\n");	
	}

	return 0;
}

