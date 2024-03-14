/*
				Q : Implement a class PrintData with three member functions.
				All with the same name "print".

				void print(int) 		: prints int value
				void print(int,int) : it prints like [11,22]
				void print(char *)  : It prints string in this form "TCA"

				print(11); 		--> 11
				print(11,22)  --> 11,22
				print("TCA")	--> "TCA"

				class PrintData
				{
					
				};
*/

#include<iostream>
using namespace std;
class PrintData{
	public:
		static void print()
		{
			cout<<"I am in Cprint() : "<<endl;
		}
		static void print(int a)
		{
			cout<<"I am in print(int a) : "<<a<<endl;
		}
		static void print(int a, float b)
		{
			cout<<"I am in print(int a, float b) : "<<a<<" , "<<b<<endl;
		}
		static void print(string str)
		{
			cout<<"I am in print(string str) : "<<"\""<<str<<"\""<<endl;
		}
};


void print()
{
	cout<<"I am in Gprint() : "<<endl;
}
void print(int a)
{
	cout<<"I am in print(int a) : "<<a<<endl;
}
void print(int a, float b)
{
	cout<<"I am in print(int a, float b) : "<<a<<" , "<<b<<endl;
}
void print(string str)
{
	cout<<"I am in print(string str) : "<<"\""<<str<<"\""<<endl;
}



int main()
{
/*
	A ob;
	ob.print();
	ob.print(11);
	ob.print(21,3.14);
	ob.print("Omkar");
*/
	cout<<"Class print()"<<endl;
	PrintData::print();
	PrintData::print(11);
	PrintData::print(21,3.14);
	PrintData::print("Omkar");
	
	cout<<endl<<"- - - - -- -- - - - -- - - -- - - -- - --"<<endl<<"Global print() "<<endl<<endl;
	
	print();
	print(22);
	print(01,3.14);
	print("Vaibhav");
	
	{
		print();
		PrintData::print();		
	}
	return 0;
}
