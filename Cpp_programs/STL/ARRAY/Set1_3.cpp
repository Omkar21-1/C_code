/*
	 3.   Create a program that finds the maximum element in an array of integers using the Array class.
*/
#include<iostream>
#include<array>
using namespace std;
#define SIZE 5

template <class td>
td maximum(array<td,SIZE> &a)
{
	if(a.size()==1)
	{
		return a.at(0);
	}
	td max = a.at(0);
	for(auto i=a.cbegin()+1; i<a.cend(); ++i)
	{
		if(*i>max) max = *i;
	} 
	return max;
}


int main()
{
	array<float,SIZE> a {11,22,33,44,55.10};
	
	cout<<"Max : "<<maximum<float>(a)<<endl; 

	return 0;
}
