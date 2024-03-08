#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"I am in class A "<<endl;
		}
};

class B
{
	public:
		void display()
		{
			cout<<"I am in class B "<<endl;
		}
};

class C : public A, public B
{
	public:
		void display()
		{
			A::display();
			B::display();
			cout<<"I am in class C "<<endl;
		}
};

int main()
{
	C ob;
	ob.display();

	return 0;
}
