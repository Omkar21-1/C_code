/*
		Sure, here's a problem statement for you to solve using template functions:

		Problem: Write a template function maximum() that takes two arguments of any type and returns the maximum of the two values. 
		Test the function with integers, floating-point numbers, and characters.

		Your task is to implement the maximum() template function and test it with different types of arguments to ensure it works correctly.
		
		swap()

*/

#include<iostream>
using namespace std;

/* Maximum Value */
template<class Temp_dataType>
Temp_dataType maxi(Temp_dataType &a, Temp_dataType &b)
{
	return (a>b ? a : b);
}

/* Minimum Value*/
template<class Temp_dataType>
Temp_dataType mini(Temp_dataType &a, Temp_dataType &b)
{
	return (a<b ? a : b);
}

/* Swap */
template<class Temp_dataType>
void swaping(Temp_dataType &a, Temp_dataType &b)
{
	Temp_dataType temp = a;
	a = b;
	b = temp;
}




int main()
{
	int a = 10, b = 20;
	float c = 10.5, d = 20.5;
	cout<<"maximum : "<<maxi<int>(a,b)<<endl;
	cout<<"minimum : "<<mini<int>(a,b)<<endl;
	
	cout<<"maximum : "<<maxi<float>(c,d)<<endl;
	cout<<"minimum : "<<mini<float>(c,d)<<endl;

	cout<<"Before Swaping : "<<a<<" "<<b<<endl;
	swaping<int>(a,b);
	cout<<"After Swaping : "<<a<<" "<<b<<endl;
	
	cout<<"Before Swaping : "<<c<<" "<<d<<endl;
	swaping<float>(c,d);
	cout<<"After Swaping : "<<c<<" "<<d<<endl;
	
	
	
	return 0;
}
