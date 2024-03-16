/*
		Shape Hierarchy:
		Create a hierarchy of shapes such as Circle, Rectangle, and Triangle. 
		Each shape should have common properties like area and perimeter, and specific properties/methods for each shape type.
*/
#include<iostream>
using namespace std;

/* ABSTRACT class */
class AREA
{
	public:
		virtual float area() = 0;			 	//virtual function declaration 
		//virtual float parameter() = 0; 				//virtual function declaration
};


class CIRCLE : public AREA
{
	float radius;
	const float PI=3.14;
	
	public:
		CIRCLE(float radius=0.00) : radius(radius) {}
		CIRCLE(CIRCLE &t) : radius(t.radius) {}
		
		float area()
		{
			return (PI*radius*radius);	
		}
};

class RECTANGLE : public AREA
{
	float breadth;
	float length;
	
	public:
		RECTANGLE(float breadth=0.00, float length=0.00) : breadth(breadth), length(length) {}
		RECTANGLE(RECTANGLE &t) : breadth(t.breadth), length(t.length) {}
		
		float area()
		{
			return (breadth*length);	
		}
};

class TRIANGLE : public AREA
{
	float base;
	float height;
	
	public:
		TRIANGLE(float base=0.00, float height =0.00) : base(base), height(height) {}
		TRIANGLE(TRIANGLE &t) : base(t.base), height(t.height) {}
		
		float area()
		{
			return (0.5*base*height);	
		}
};


int select()
{
	int n;
	cout<<"MENU->\n1.Area Of Rectangle : \n2.Area Of Circle : \n3.Area Of Triangle : "<<endl;
	cout<<"Enter Option : ";
	cin>>n;
	return n;
}


int main()
{
	int choice = select();
	AREA *p = NULL;
	
	switch(choice)
	{
		case 1:
			p = new RECTANGLE(2,5.5);
			cout<<endl<<"Area Of Rectangle : "<<p->area()<<endl;
			break;
		case 2:
			p = new CIRCLE(2.5);
			cout<<endl<<"Area Of Circle : "<<p->area()<<endl;
			break;
		case 3:
			p = new TRIANGLE(2,2);
			cout<<endl<<"Area Of Triangle : "<<p->area()<<endl;
			break;
		default:
			cout<<endl<<"Wrong Choise !!"<<endl;
	}	
	
	return 0;
}
