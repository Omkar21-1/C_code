#include<iostream>
#include<stdio.h>
using namespace std;
class Shape 
{
	public:
		void virtual Area()=0;
};
class Rectangle:public Shape
{
	int length;
	int breadth;
	public:
		Rectangle(int x,int y)
		{
			length=x;
			breadth=y;
		}
		void Area()
		{
			int ans;
			if(length>0 && breadth>0)
			{
			ans=length*breadth;

			cout<<"Area of Rectangle : "<<ans<<endl;
			}
			else
			{
				cout<<"In Valid input : "<<endl;
			}
		}

};
class Circle: public Shape
{
	int radius;
	public:
		Circle(int z)
		{
			radius=z;
		}
		void Area()
		{
			if(radius>0)
			{
				float ans;
				ans=3.14*radius*radius;

				cout<<"Area of Circle : "<<ans<<endl;
			}
			else
			{
				cout<<"In Valid input "<<endl;
			}
		}
};
int main()
{
	char ch;
	/*He ethe Declare kele ahet*/
	int l,b;
	int r;
	Shape *ob = NULL;
	/*Je tuje Switch case madhe hote*/
	
	/*
			ERROR : crosses initialization
			
			Manje Tu Switch kiva if..else if madhe variable Declare karu ny shakat
			
			
	*/
	
	cout<<"Which Area you want : ";
	cin>>ch;

	switch(ch)
	{
		case 'R':
		case 'r':
					
					cout<<"Enter the length : ";
					cin>>l;

					cout<<"Enter the Breadth : ";
					cin>>b;
		
					/* ani Aplyala pointer Vaprun Kasa karaych te shikavla ahe*/
					/* Fkt ob chya type vr dicide honar Area Kontya class cha bolvaycha class "Rectangle" la point kelyavr */
					ob = new Rectangle(l,b);
					ob->Area();
					break;
		case 'C':
		case 'c':
					

					cout<<"Enter the radius : ";
					cin>>r;
					
					/* Object ekach banvla fkt Point dusrya la karay lagla ki Area() cha kam baddla */
					ob = new Circle(r);
					ob->Area();
					break;
		default:
					cout<<"In valid input : ";


	}
	return 0;
}
