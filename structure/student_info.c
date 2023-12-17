#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 30

/* GLOBAL VARIABLE */
int i,j;

/* STRUCTURE DECLARATION */
struct Student{
	int Roll_No;
	char Name[SIZE];
	float Per;
};


/* FUNCTION DECLARATION / FUNCTION PROTOTYPE */
struct Student* make_array(int);
void accept_student_record(struct Student[],int);
void display_student_record(struct Student[],int);
void display_topper_student_record(struct Student[],int);
void display_first_class_student_record(struct Student[],int);
void display_distinct_student_record(struct Student[],int);
void display_pass_class_student_record(struct Student[],int);
void display_fail_class_student_record(struct Student[],int);



struct Student* make_array(int n)
{
	struct Student *record;
	
	record = (struct Student *) malloc( n * sizeof(struct Student) );
	if(record==NULL)
	{
		printf("Insufficient Memory Allocation\n");
		exit(0);
	}
	
	return record;
}


void accept_student_record(struct Student record[],int n)
{
	for(i=0; i<n; i++)
	{
		printf("%d) Record \n",i+1);	

		printf("Enter Roll_No : ");
		scanf("%d",&record[i].Roll_No);
		getchar();
		
		printf("Enter Name : ");
		gets(record[i].Name);
		
		printf("Enter Percentage : ");
		scanf("%f",&record[i].Per);
		
		printf("\n");
	}
}

void display_student_record(struct Student record[],int n)
{
	for(i=0; i<n; i++)
	{
		printf("%d \t %10s \t %.2f\n",record[i].Roll_No,record[i].Name,record[i].Per);
	}
	
}	
	
void display_topper_student_record(struct Student record[],int n)
{
	int max = record[0].Per;
	
	for(i=0; i<n; i++)
	{
		if(record[i].Per > max)
		{
			max = record[i].Per;
		}		
	}
	
	for(i=0; i<n; i++)
	{
		if(record[i].Per == max)
		{
			printf("%d \t %10s \t %.2f\n",record[i].Roll_No,record[i].Name,record[i].Per);
		}
	}
}

void display_first_class_student_record(struct Student record[],int n)
{
	for(i=0; i<n; i++)
	{
		if(record[i].Per>=90)
		{
			printf("%d \t %10s \t %.2f\n",record[i].Roll_No,record[i].Name,record[i].Per);
		}
	}
}

void display_distinct_student_record(struct Student record[],int n)
{
	for(i=0; i<n; i++)
	{
		if(record[i].Per>=70 && record[i].Per<90)
		{
			printf("%d \t %10s \t %.2f\n",record[i].Roll_No,record[i].Name,record[i].Per);
		}
	}
}

void display_pass_class_student_record(struct Student record[],int n)
{
	for(i=0; i<n; i++)
	{
		if(record[i].Per>=40 && record[i].Per<70)
		{
			printf("%d \t %10s \t %.2f\n",record[i].Roll_No,record[i].Name,record[i].Per);
		}
	}
}

void display_fail_class_student_record(struct Student record[],int n)
{
	for(i=0; i<n; i++)
	{
		if(record[i].Per<=40)
		{
			printf("%d \t %10s \t %.2f\n",record[i].Roll_No,record[i].Name,record[i].Per);
		}
	}
}




int main()
{
	
	
	struct Student *record;
	int n;
	printf("How Many Records You Want to Store : ");
	scanf("%d",&n);
	
	
	
	record = make_array(n);
	
	printf("\n**********ACCEPTING STUDENT RECORD***********\n");
	accept_student_record(record,n);
	
	printf("\n\n**********TOPPER STUDENT RECORD***********\n");
	display_topper_student_record(record,n);
	
	printf("\n\n**********DISPLAYING STUDENT RECORD***********\n");
	display_student_record(record,n);
	
	printf("\n\n**********DISPLAYING FIRST CLASS STUDENT RECORD***********\n");
	display_first_class_student_record(record,n);
	
	printf("\n\n**********DISPLAYING DISTINCT STUDENT RECORD***********\n");
	display_distinct_student_record(record,n);
	
	printf("\n\n**********DISPLAYING PASS STUDENT RECORD***********\n");
	display_pass_class_student_record(record,n);
	
	printf("\n\n**********DISPLAYING FAIL STUDENT RECORD***********\n");
	display_fail_class_student_record(record,n);
	
	
	free(record);

	
	return 0;
}




























