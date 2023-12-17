
/* 
   QUESTION 
  
  X O GAME

*/



#include<stdio.h>
#include<stdlib.h>
#define SIZE 3				/* size of array */

/* DECLARATION OF GLOBAL VARIABLE */
int i;					/* using in loops for rows */
int j;					/* using in loops for columns */


/* FUNCTION DECLARATION or FUNCTION PROTOTYPE */
void accept(int [SIZE][SIZE]);
void display(int [SIZE][SIZE]);

void X_O_GAME();
void who_wins(int [SIZE][SIZE]);







/* FUNCTION BODY or FUNCTION CODE or FUNCTION DEFINATION */


void accept(int a[SIZE][SIZE])
{
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}


void who_wins(int a[SIZE][SIZE])
{	
	int row0=0;		/* for checking winneras wins by row */
	int row1=0;
	
	int col0=0;
	int col1=0;
	
	int rdig0=0;
	int rdig1=0;
	
	
	int ldig0=0;
	int ldig1=0;
	int k=(3-1);
	
	
	for(i=0; i<3; i++)
	{
		row0=0;			/* ek row purn jhalyavr initilize to 0 kartoy karan jr winner 1 row la nasla tr */
		row1=0;
		
		col0=0;			/* ek column purn jhalyavr initilize to 0 kartoy karan jr winner 1 column la nasla tr */
		col1=0;
		
		
		/* 1 possibility : winner right digonal madhun ahe ka baghne */
			if(a[i][i]==0)
			{
				rdig0++;
			}
			else if(a[i][i]==1)
			{
				rdig1++;
			}

		for(j=0; j<3; j++)
		{
		
		/* 2 possibility : winner row madhun ahe ka baghne */
			if(a[i][j]==0)
			{
				row0++;
			}
			else if(a[i][j]==1)
			{
				row1++;
			}
			
		/* 3 possibility : winner column madhun ahe ka baghne */
			if(a[j][i]==0)
			{
				col0++;
			}
			else if(a[j][i]==1)
			{
				col1++;
			}
				
		/* 4 possibility : winner left digonal madhun ahe ka baghne */
			if(a[i][k]==0)
			{
				ldig0++;
			}
			else if(a[i][k]==0)
			{
				ldig1++;
			}k--;		
		}
		

		if(row0==3 || col0==3 || rdig0==3 || ldig0==0)
		{
			printf("0 Win's\n");
			break;
		}
		if(row1==3 || col1==3 || rdig1==3 || ldig1==0)
		{
			printf("1 Win's\n");
			break;
		}		
	}		
}




void display(int a[SIZE][SIZE])
{
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
}





void X_O_GAME()
{
	int a[SIZE][SIZE];			/* declaring variable "a" for 2D array (matrix)  WHICH WILL USE FOR X_O GAME */
	

	accept(a);
	
	display(a);
	
	who_wins(a);
	
}


/* ENTRY POINT FUNCTION */
int main()
{

	X_O_GAME();

	return 0;
}
