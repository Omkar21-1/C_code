/*
 *	Creating Class RECTANGLE;
 * */
#include<iostream>
using namespace std;

class RECTANGLE{
	private:
		float length;
		float breadth;
		float area;
	public:
		void accept()
		{
			cout<<"Enter Length of Rectangle : ";
			cin>>length;
			cout<<"Enter Breadth of Rectangle : ";
			cin>>breadth;
		}
		void calculate()
		{
			area = length*breadth;
		}
		void display()
		{
			cout<<"Area of Rectangle : "<< area << endl;
		}
		
		void find_area_of_rectangle()
		{
			accept();
			calculate();
			display();	
		}
};

int main()
{
	RECTANGLE rect1;

	rect1.find_area_of_rectangle();

	return 0;
}
