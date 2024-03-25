#include<stdio.h>
void main()
{
	char gen,qual;
	int salary,yos;
	printf("Enter Gender:");
	scanf("%c",&gen);
	
	printf("Enter YrsExp:");
	scanf("%d",&yos);
	printf("Enter Qualification:");
	getchar();
	scanf("%c",&qual);

    if(gen='M' && yos>=10 && qual=='P')
        salary=15000;

    else if(gen=='F' && yos>=10 && qual=='P')
        salary=12000;

    else if((gen=='M' && yos>=10 && qual=='G') || (yos<10 && qual=='P'))
        salary=10000;

    else if(gen=='F' && yos>=10 && qual=='G')
        salary=9000;

    else if(gen=='M' && yos<10 && qual=='G')
        salary=7000;

    else if(gen=='F' && yos<10 && qual=='G')
        salary=6000;

        printf("Salary Given Rs. %d",salary);

}
