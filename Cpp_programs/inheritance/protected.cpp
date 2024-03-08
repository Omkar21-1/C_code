#include<iostream>
using namespace std;


class A
{
	protected:
		int i;
	public:
		A(int i=0) : i(i) 
		{
			cout<<"A's Constructors...."<<endl;
		}
		void display()
		{
			cout<<"A's Value of i : "<<i<<endl;
		}
		~A()
		{
			cout<<"A's Distructor...."<<endl;
		}
};

class B 
{
	protected:
		int j;
	public:
		B(int j=0) : j(j) 
		{
			cout<<"B's Constructor...."<<endl;
		}
		void display()
		{
			cout<<"B's value of j : "<<j<<endl;
		}
		~B()
		{
			cout<<"B's Distructor...."<<endl;
		}
		
};

class C :public A, public B
{
	protected :
		int k;
	public :
		C(int i=0, int j=0, int k=0) : A(i), B(j), k(k) 
		{
			cout<<"C's Constructor...."<<endl;
		}
		
		void display()
		{
			A::display();
			B::display();
			cout<<"C's value of k : "<<k<<endl;
		}
		~C()
		{
			cout<<"C's Distructor...."<<endl;
		}
};


int main()
{
	C ob(11,22,33);
	ob.display();
		
	return 0;
}
