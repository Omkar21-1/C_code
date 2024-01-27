#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

float area_parameter_of_rectangle();
float surface_area_of_cubid();
float area_circumference_of_circle();
float surfase_volume_area_of_cylinder();
float first_newtons_equation_of_motion();

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////1

	float area_parameter_of_rectangle()
	{
		float ans,l,b; 	// l= length,   b=breadth
		int op;		// op=operation;
		printf("\n\tEnter Lenght of Rectangle :");
		scanf("%f",&l);
		printf("\tEnter Breadth of Rectangle :");
		scanf("%f",&b);
	
		printf("\t1.Calculate Area of Rectangle \n\t2.Calculate Parameter of Rectangle\n\tEnter Sr.No. :");
		scanf("%d",&op);

		switch(op)
		{
			case 1:
				ans=l*b;
				return ans;
				break;
			case 2:
				ans=2*(l+b);
				return ans;
				break;
			default :
				printf("\tWrong Option!!\n");	
				exit(0);
		}
	
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////2

	float surface_area_of_cubid()
	{
		float l,b,h,ans; 	//l=length, b=breadth, h=height, ans=answer;
		
		printf("\n\tEnter Length of Cubid :");
		scanf("%f",&l);
		printf("\tEnter Breadth of Cubid :");
		scanf("%f",&b);
		printf("\tEnter Height of Cubid :");
		scanf("%f",&h);
		
		ans = 2*((l*b)+(l*h)+(b*h));
		return ans;
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////3

	float area_circumference_of_circle()
	{
		float r,ans;		// r=radius, ans=answer;
		int op;			// op=operation;

		printf("\n\tEnter Radius :");
		scanf("%f",&r);

		printf("\t1.Area of Circle\n\t2.Circumference of Circle");
		printf("\n\tEnter Sr.No. :");
		scanf("%d",&op);

		switch(op)					
		{
			case 1:
				ans = PI*(r*r);
				return ans;
				break;
			case 2:
				ans = 2*PI*r;
				return ans;
				break;
			default :
				printf("\tWrong Option!!!");	
				exit(0);
		}
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////4

	float surfase_volume_area_of_cylinder()
	{
		float r,h,ans;		// r=radius, h=height, ans=answer;
		int op;			// op=operation;

		printf("\n\tEnter Radius of Cylinder :");
		scanf("%f",&r);
		printf("\tEnter Height of Cylinder :");
		scanf("%f",&h);
		
		printf("\t1.Surface Area of Cylinder\n\t2.Volume of Cylinder\n");
		printf("\tEnter Sr.No.:");
		scanf("%d",&op);

		switch(op)
		{
			case 1:
				ans = (2*PI*(r*r))+(2*PI*(r*r));
				return ans;
				break;
			case 2:
				ans = PI*(r*r)*h;
				return ans;
				break;
			default :
				printf("\tWrong Option!!!");
				exit(0);
		}
	}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////5

	float first_newtons_equation_of_motion()
	{
		float u,a,t,ans;	// u=velocity, a=acceleration t=time, ans=answer;

		printf("\tEnter Velocity :");
		scanf("%f",&u);
		printf("\tEnter Acceleration :");
		scanf("%f",&a);
		printf("\tEnter Time :");
		scanf("%f",&t);
	
		ans = u+(a*t);
		return ans;
	}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7

int main()
{

	int choise;
	float ans;

	printf("**************************************MENU**************************************\n");
	
	printf("\n 1.Area & Parameter of Rectangle \n 2.Surface Area of Cubid \n 3.Area & Circumference of Circle \n 4.Surface Area & Volume of Cylinder \n 5.First Newton's Equation of Motion \n ");

	printf("");
	
	printf("\n\n\tEnter Sr.No. :");
	scanf("%d",&choise);
	printf("\n\n");
	switch(choise)
	{
		case 1:
			printf("\t%.2f",area_parameter_of_rectangle());					//Area of Rectangle OR Parameter of Rectangle
			break;
		case 2: 
			printf("\tSurface Area of Cubid :%.2f",surface_area_of_cubid());		//Surface Area of Cubid
			break;
		case 3:
			printf("\t%.2f",area_circumference_of_circle());				//Area of Circle OR Circumferences of Circle
			break;
		case 4:
			printf("\t%.2f",surfase_volume_area_of_cylinder());				//Surface Area OR Volume of Cylinder	
			break;
		case 5:
			printf("\tFinal Velocity :%.2f",first_newtons_equation_of_motion());		//First Newtons Eq of Motion
			break;


		case 6:
			printf("\t%.2f");
			break;

	}
	return 0;
}
