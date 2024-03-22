/*
		Create template class
		
*/

#include<iostream>
using namespace std;

template<class Temp_dataType>
class Calculator
{
	private:
		Temp_dataType a;
		Temp_dataType b;
	public:
		Calculator(Temp_dataType a=0, Temp_dataType b=0) : a(a),b(b) {}
		Calculator(Calculator &t)  : a(t.a),b(t.b) {}
		
		Temp_dataType add()
		{
			return (a+b);
		}
		Temp_dataType sub()
		{
			return (a-b);
		}
		Temp_dataType div()
		{
			return ((float)a/b);
		}
		Temp_dataType mul()
		{
			return (a*b);
		}
};





int main()
{
	int a=10,b=20;
	/*int object */
	Calculator <int>ob1(a,b);
	cout<<"int add : "<<ob1.mul()<<endl;
	

	return 0;
}
