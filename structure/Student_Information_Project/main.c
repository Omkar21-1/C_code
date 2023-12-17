#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Student_Information_Functions.h"


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
