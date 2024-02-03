/*
	Author : Omkar Kshirsagar
	Subject : Creating_perfect_class Version 4
	
	*Using CONSTRUCTOR's & FUNCTION's
	1. Default Constructor / Empty Constructor
	2. Parameterized Constructor
	3. Copied Constructor
	
*/

#include<iostream>												//Added Iostream Header File
using namespace std;												//For Accesing Object of iostream Class , inside std namespace   

/*Created Class "RECTANGLE" */
//Class "RECTANGLE" STARTS
class RECTANGLE													
{
	/* Private Section Of Class Rectangle Starts From Here */
	private:												
	
		float length;											//"Length" is Used For Storing The Length Of Rectangle 
		float breadth;											//"Breadth" is Used For Storing The Breadth Of Rectangle 
		float area;											//"area" is Used For Storing The Calculated Area Of Rectangle
		
	/* Private Section Of Class Rectangle Ends Here */												
	
	/* Public Section Of Class Rectangle Starts From Here */
	public:
		/*CONSTRUCTOR STARTS*/
		RECTANGLE()											/*CONSTRUCTOR of Class RECTANGLE "Default constructor / Empty constructur"*/
		{
			length = 0;										//When Object of class RECTANGLE is Created without Parameter Then The Default Value For Length = 0;
			breadth = 0;										//When Object of class RECTANGLE is Created without Parameter Then The Default Value For Breadth = 0;
			area = 0;										//When Object of class RECTANGLE is Created without Parameter Then The Default Value For Area = 0;
		}
		
		RECTANGLE(float &length_from_main, float &breadth_from_main)/*BAD HABIT*/			/* CONSTRUCTOR of Class RECTANGLE "Parameterized Constructor"*/
		{
			length = length_from_main;								//When Object of class RECTANGLE is Created with Parameterized Constructor For length 
			breadth = breadth_from_main;								//When Object of class RECTANGLE is Created with Parameterized Constructor For Breadth
			area = 0;										//When Object of class RECTANGLE is Created with Parameterized Constructor Then The Default Value For Area = 0;
		}
		
		RECTANGLE(RECTANGLE &object_passed_by_main)/*BAD HABIT*/					/* CONSTRUCTOR of Class RECTANGLE "Copied Constructor" using reference*/
		{
			length = object_passed_by_main.length;							//length = object_passed_by_main chya length chi value
			breadth = object_passed_by_main.breadth;						//breadth = object_passed_by_main chya breadth chi value
			area = 0;										//When Object of class RECTANGLE is Created with Copied Constructor Then The Default Value For Area = 0;
		}
		
		RECTANGLE(RECTANGLE *object_passed_by_main)/*BAD HABIT*/					/* CONSTRUCTOR of Class RECTANGLE "Copied Constructor" using pointer*/
		{
			length = object_passed_by_main->length;							//length = object_passed_by_main chya length chi value
			breadth = object_passed_by_main->breadth;						//breadth = object_passed_by_main chya breadth chi value
			area = 0;										//When Object of class RECTANGLE is Created with Copied Constructor Then The Default Value For Area = 0;
		}
		/*CONSTRUCTOR ENDS*/
		
		
		void calculate()										/*Finding Area Of Rectangle Using "calculate()"*/
		{
			area = length*breadth;									//To Calculate Area Of Rectangle .. Area = Length x Breadth
		}
		
		void display()											/*To Display Calculated Area Of Rectangle Using "display()"*/
		{
			cout<<"Area Of Rectangle Of Length : " <<length <<" AND Breadth : " <<breadth <<" Is : " <<area <<endl <<endl;
		}
	/* Public Section Of Class Rectangle Ends Here */
};
//Class "RECTANGLE" ENDS

int main()
{
	float length = 2;
	float breadth = 2;
	
	
	/*Creating Object of Class RECTANGLE .... Default constructor / Empty constructur */
	cout<<"Default Constructor : " <<endl;
	RECTANGLE r1;
	r1.calculate();
	r1.display();
	
	/*Creating Object of Class RECTANGLE .... Parameterized Constructor */
	cout<<"Parameterized Constructor : " <<endl;
	RECTANGLE r2(length,breadth);
	r2.calculate();
	r2.display();
	
	/*Creating Object of Class RECTANGLE .... Copied Constructor using reference*/
	cout<<"Copied Constructor using REFERENCE : " <<endl;
	RECTANGLE r3(r1);
	r3.calculate();
	r3.display();
	
	/*Creating Object of Class RECTANGLE .... Copied Constructor using pointer*/
	cout<<"Copied Constructor using POINTER: " <<endl;
	RECTANGLE r4(&r2);
	r4.calculate();
	r4.display();
	
	return 0;
}























