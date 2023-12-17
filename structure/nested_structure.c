#include<stdio.h>
#include<stdlib.h>

struct Date
{
	int dd;
	int mm;
	int yyyy;
};

struct Student
{
	int rno;
	struct Date bday;
};



int main()
{
	struct Student rec;
	
	printf("Enter roll no : ");
	scanf("%d",&rec.rno);
	printf("Enter Birthday Date (dd-mm-yyyy) : ");
	scanf("%d-%d-%d",&rec.bday.dd,&rec.bday.mm,&rec.bday.yyyy);

	printf("%d \t %d-%d-%d \n",rec.rno,rec.bday.dd,rec.bday.mm,rec.bday.yyyy);



	return 0;
}
