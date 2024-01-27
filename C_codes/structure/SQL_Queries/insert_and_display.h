/*  */

/* FUNCTION PROTOTYPE / FUNCTION DECLARATION */
void insert_student_records(struct Student* ,int);
void display_student_records(struct Student* ,int);


/* FUNCTION BODY / FUNCTION DEFINATION / FUNCTION CODE */
void insert_student_records(struct Student *record,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\n%d) Record\n",i+1);
		
		printf("Enter Roll_no : ");
		scanf("%d",&record[i].rno);
		getchar();				/* -->Clraeing Buffer From Keyboard i.e. '\n' */
		
		printf("Enter Name : ");
		gets(record[i].name);
		
		printf("Enter Percentage : ");
		scanf("%f",&record[i].per);
		getchar();				/* -->Clraeing Buffer From Keyboard i.e. '\n' */
		
		printf("Enter City : ");
		gets(record[i].city);
	}
}

void display_student_records(struct Student *record,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%5d %15s %15.2f %15s\n",record[i].rno,record[i].name,record[i].per,record[i].city);
	}
}
