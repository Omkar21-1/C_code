/*
	File Reading and Writing:

	Open a file named "data.txt" for writing. Write the numbers from 1 to 10, each on a new line.
	Open the same file for reading, and print the numbers to the console.
*/


#include<stdio.h>

int main()
{
	FILE *fp;
	
	fp = fopen("a.txt","w+");
	if(fp==0)
	{
		printf("Problem To open a.txt \n");
		return 1;
	}
	
	
	
	
	int a[100];
	int n=0;
	int i=0;


/*
	do
	{
		printf("Enter Number : ");
	n=	scanf("%d",&a[i]);
		getchar();	
				
		fprintf(fp,"%d\n",a[i]);	
		i++;		
			
	}while(n!=-1);
	getchar();
	*/
	
	
	while(1)
	{		
		
		printf("Enter Number : ");
		n=scanf("%d",&a[i]);
		getchar();	
		
		if(a[i]=='\0')
		{
			a[0] = a[i];
			rewind(fp);
			fprintf(fp,"%d\n",a[0]);
			break;
		}
		
		fprintf(fp,"%d\n",a[i]);	
		i++;
		
		
	}
	
	rewind(fp);
	
	
	
	char b;

	while(1)
	{
		b = fgetc(fp);
		
		
		if(b==EOF)
		{
			break;
		}
		printf("%c",b);
	}
	
	fclose(fp);


	return 0;
}
