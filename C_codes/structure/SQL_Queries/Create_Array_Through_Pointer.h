/* CREATING ARRAY THROUGH USING POINTERS */

/* FUNCTION PROTOTYPE / FUNCTION DECLARATION */
struct Student* create_array_through_pointer(int);



/* FUNCTION BODY / FUNCTION DEFINATION / FUNCTION CODE */
struct Student* create_array_through_pointer(int n)
{
	struct Student *create_array;
	
	create_array = (struct Student*) malloc( n * sizeof(struct Student) );
	if(create_array==NULL)
	{
		printf("Insufficint Memory Allocation\n");
		exit(0);
	}
	
	return create_array;
}
