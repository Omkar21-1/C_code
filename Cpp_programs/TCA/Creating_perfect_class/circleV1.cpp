/*
 *	Creating First Class 
 *	Having Two Section Private AND Publuc 
 *
 *	class CIRCLE
 *	1.accept the radius;
 *	2.calculate the area;
 *	3.display the area;
 *
 *	4. in "float find_area_of_a_circle()";
 *
 * */



#include<iostream>
using namespace std;

class CIRCLE{
	private:
		float radius;
		float area;

		void accept()
		{
			cout<<"Enter Radius of a Circle : ";
			cin>>radius;
		}
		void calculate()
		{
			area = 3.14 * radius*radius;
		}
		void display()
		{
			cout<<"Radious of a Circle is : "<< radius << endl;
			cout<<"Area of a Circle is : "<< area << endl;
		}

	public:	
		float find_area_of_a_circle()
		{
			accept();
			calculate();
			display();
			return area;
		}

};


int main()
{
	float circle_area;
	CIRCLE ob1;
	
	circle_area = ob1.find_area_of_a_circle();

	cout<<"In main Circle Area is : "<< circle_area << endl;

	return 0;
}
