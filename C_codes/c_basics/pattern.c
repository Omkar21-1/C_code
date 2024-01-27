#include<stdio.h>

void square_pattern();
void left_side_upper_right_angle_trangle_pattern();
void right_side_upper_right_angle_trangle_pattern();
void left_side_lower_right_angle_trangle_pattern();
void right_side_lower_right_angle_trangle_pattern();
void upper_cone_pattern();
void lower_cone_pattern();
//void diamond_pattern();



void square_pattern()
{
	int i,j;

	printf("Square Pattern\n");

	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
			printf(" *");
		}

	printf("\n");
	}
	printf("\n");
}


void left_side_upper_right_angle_trangle_pattern()
{
	int i,j;

	printf("Left Side Upper Right Angle Trangle Pattern\n");

	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	printf("\n");
}


void right_side_upper_right_angle_trangle_pattern()
{
	int i,j,sp;

	printf("Right Side Upper Right Angle Trangle Pattern\n");

	for(i=1; i<=4; i++)
	{
		for(sp=4; sp>=i; sp--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	printf("\n");
}


void left_side_lower_right_angle_trangle_pattern()
{
	int i,j;

	printf("Left Side Lower Right Angle Trangle Pattern\n");

	for(i=4; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	printf("\n");
}


void right_side_lower_right_angle_trangle_pattern()
{
	int i,j,sp;

	printf(" Right Side Lower Right Angle Trangle Pattern\n");

	for(i=4; i>=1; i--)
	{
		for(sp=4; sp>=i; sp--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	printf("\n");
}


void upper_cone_pattern()
{
	int i,j,sp;

	printf("Upper Cone Pattern\n");

	for(i=1;i<=4; i++)
	{
		for(sp=4; sp>=i;sp--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
	printf("\n");
	}
	printf("\n");
}


void lower_cone_pattern()
{

	int i,j,sp;

	printf("Lower Cone Pattern\n");

	for(i=4; i>=1; i--)
	{
		
		for(sp=4; sp>=i; sp--)
		{
			printf(" ");
		}


		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n");
}

/*
void diamond_pattern()
{
	printf("Diamond Pattern\n");
	upper_cone_pattern();
	lower_cone_pattern();
	printf("\n");
}

*/


int main()
{
	int sr_no,try_again;
	try_again=1;

	printf("Hey\n");

	printf("\t\t Which pattern you want to print\n\n");

	printf(" 1: UPPER CONE PATTERN\n 2: LOWER CONE PATTERN\n 3: SQUARE PATTERN \n 4: LEFT SIDE UPPER RIGHT ANGLE TRANGLE PATTERN \n 5: RIGHT SIDE UPPER RIGHT ANGLE TRANGLE PATTERN\n 6: LEFT SIDE LOWER RIGHT ANGLE TRANGLE PATTERN\n 7: RIGHT SIDE LOWER RIGHT ANGLE TRANGLE PATTERN\n");

	

	
		printf("Enter Sr.No. :");
	AGAIN:	scanf("%d",&sr_no);


	switch(sr_no)
	{
		case 1:
			upper_cone_pattern();
			break;
		case 2:
			lower_cone_pattern();
			break;
		case 3:	
			square_pattern();
			break;
		case 4:	
			left_side_upper_right_angle_trangle_pattern();
			break;
		case 5:	
			right_side_upper_right_angle_trangle_pattern();
			break;
		case 6:	
			left_side_lower_right_angle_trangle_pattern();	
			break;
		case 7:	
			right_side_lower_right_angle_trangle_pattern();
			break;
		default :
			printf("Wrong Input!!\n");
			while(try_again<=3)
			{
				printf("Please Enter Sr.No AGAIN :");
				try_again = try_again+1;	
				goto AGAIN;
			}
	}

	printf("Bye");
	return 0;
}
