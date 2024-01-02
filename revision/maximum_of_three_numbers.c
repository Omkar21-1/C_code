/*
	Authore : Omkar Kshirsagar 
	
	Write A Program Which Accepts Three Numbers From User And Dispaly Maximum Of it.
*/


//Including Standard Input Output File
#include<stdio.h>


//FUNCTION DECLARATION // FUNCTION PROTOTYPE

/* Takes Input From User */
void accept_number(int*,int*,int*);

/*display's maximum of Three Numbers*/
void display_maximum(int,int,int);




//FUNCTION DEFINATION // FUNCTION CODE // FUNCTION BODY

/* Takes Input From User */
void accept_number(int* First_number,int* Second_number,int* Third_number)
{
	printf("Enter First Number : ");	//Accepting First number From User
	scanf("%d",First_number);
	printf("Enter First Number : ");	//Accepting Second number From User
	scanf("%d",Second_number);
	printf("Enter First Number : ");	//Accepting Third number From User
	scanf("%d",Third_number);	
}


/*display's maximum of Three Numbers*/
void display_maximum(int First_number,int Second_number,int Third_number)
{	
	printf("\n");
	if(First_number==Second_number && First_number==Third_number)		// If all Number's are equal
	{
		printf("All Numbers Are Equal's !!\n");
	}
	else if(First_number>=Second_number && First_number>=Third_number)	// If First Number is greater
	{
		printf("%d is Maximum \n",First_number);
	}
	else if(Second_number>=First_number && Second_number>=Third_number)	// If Second Number is greater  
	{
		printf("%d is Maximum \n",Second_number);			
	}
	else									// If Third Number is greater
	{
		printf("%d is Maximum \n",Third_number);
	}
}


//Entery Point Function
int main()
{
	int First_number;
	int Second_number;
	int Third_number;
	
	accept_number(&First_number,&Second_number,&Third_number);		//call by REFERENCES 

	display_maximum(First_number,Second_number,Third_number);		//call by VALUE

	return 0;
}
