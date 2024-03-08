#include<iostream>
using namespace std;

class A
{
	private:
	int i;
	public:
		void display()
		{
			cout<<"I am in class A "<<i<<endl;
		}
};
class B : public A
{
	public:
		void display()
		{
			A::display();
			cout<<"I am in class B "<<endl;
		}
};
class C : public B
{
	public:
		void display()
		{
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
