/*
		Shape Hierarchy:
		Create a hierarchy of shapes such as Circle, Rectangle, and Triangle. 
		Each shape should have common properties like area and perimeter, and specific properties/methods for each shape type.
*/
#include<iostream>
using namespace std;


class AREA
{
	protected:
		//float area;
		const float PI = 3.14;
		
		/* rectangle */
		float length;
		float width;
		
		/* triangle */
		float height;
		float base;
		
		/* circle */
		float radius;
		
	public:
		
		float calc_rectangle()
		{
			return (length*breadth);
		}
		float calc_triangle()
		{
			return (0.5*height*base);
		}
		float calc_circle()
		{
			return (PI*radius*redius);
		}
};




int main()
{

	return 0;
}
