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
	public:
		float find_area_of_rectangle(float length_func=0, float breadth_func=0)
		{
			//cout<< length_func << "\t" << breadth_func << endl;

			
			if(length_func==0 && breadth_func==0)
			{
				accept();
			}
			else
			{
				length = length_func;
				breadth = breadth_func;
			}
			calculate();
			display();	
			return area;
		}
};
int main()
{
	RECTANGLE rect1;
	RECTANGLE rect2;

	cout<<"Without Paramters "<< endl;
	rect1.find_area_of_rectangle();

	float length = 2;
	float breadth = 4;
	cout<< endl << "With Parameters "<< endl;
	rect2.find_area_of_rectangle(length,breadth);

	return 0;
}
