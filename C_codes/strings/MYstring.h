/* FUNCTION PROTOTYPE or FUNCTION DECLARATION */


int MYstrlen(char[]);
void MYstrcpy(char[],char[])



/* FUNCTION CODE or FUNCTION BODY or FUNCTION DEFINATION */



int MYstrlen(char string[])
{
	int i;
	for(i=0; string[i]; i++);
	return i;
}


void MYstrcpy(char target[],char source[])
{
	int i=0;
	while( target[i]=source[i] )
	{
		i++;
	}
	
	//for(i=0; target[i]=source[i]; i++);
}
