#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "table_entity.h"				/* Table Entity Was Declared in This Hearder File */
#include "Create_Array_Through_Pointer.h"		/* Creating Array Through Pointers */
#include "insert_and_display.h"




int main()
{
	struct Student *record;
	int n;			/* -->For Size of Array */
	
	
	printf("How Many Record's You Want To Store : ");
	scanf("%d",&n);
	
	record = create_array_through_pointer(n);
	
	/* Iserting Records in Student Table */
	printf("\n\n*********Insert Values For Student Table*********\n");
	insert_student_records(record,n);
	
	printf("\n\n*********Displaying Values of Student Table*********\n");
	printf("   rno		name		percentage	  city\n");
	printf("-------------------------------------------------------\n");
	display_student_records(record,n);
	
	

	return 0;
}
