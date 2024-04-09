/*
	 4.   Write a function to reverse the elements of an array using the Array class.
*/
#include<iostream>
#include<array>
#define SIZE 5
using namespace std;


template <class td>
void display(std::array<td,SIZE> &arr)
{
	for(auto i=arr.cbegin(); i<arr.cend(); ++i)
	{
		std::cout<<*i<<" ";
	}std::cout<<std::endl;
}

template <class td>
void reverse_array(array<td,SIZE> &a)
{
	auto i = a.begin();
	auto j = a.end()-1;
	
	while(i<j)
	{
		td temp = *i;
		*i = *j;
		*j = temp;
		++i;
		--j;
	}
}


int main()
{
	array<int,SIZE> a{11,22,33,44,55};
	
	display<int>(a);
	
	reverse_array<int>(a);
	
	display<int>(a);

	return 0;
}
