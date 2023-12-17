/* Ek building ahe 5 majli ani pratyak flore vr 4 flat ahet
   flore number ani flat number + karun 
   je odd ahet tyanchi light ghalvaychi
 */
 
#include<stdio.h>
 
int i;
int j;

/* FUNCTION PROTOTYPE or FUNCTION DECLARATION */ 
void display(int [5][4]);
void turn_of_the_lights(int [5][4]);
 
 
/* FUNCTION CODE or FUNCTION BODY or FUNCTION DEFINATION */
void turn_of_the_lights(int building[5][4])
{
	for(i=0; i<5; i++)
	{
		for(j=0; j<4; j++)
		{
			if(!((i+j)%2))
			{
				building[i][j]=1;
			}
		}
	}
}

void display(int building[5][4])
{
	for(i=0; i<5; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%3d",building[i][j]);
		}printf("\n");
	}printf("\n");
} 
 
 
 
 int main()
 {
 	int building[5][4]={0};
 	
 	
 	turn_of_the_lights(building);
 	
 	
 	display(building);
 
 
 	return 0;
 }
