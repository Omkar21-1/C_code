/*
	 1.   Write a program to initialize an array of integers using the Array class and display its contents.
*/
#include<iostream>
#include<array>
#define SIZE 5

template <class td>
void display(std::array<td,SIZE> &arr)
{
	for(auto i=arr.cbegin(); i<arr.cend(); ++i)
	{
		std::cout<<*i<<" ";
	}std::cout<<std::endl;
}

template <class td>
void display_rev(std::array<td,SIZE> &arr)
{
	for(auto i=arr.rbegin(); i<arr.rend(); ++i)
	{
		std::cout<<*i<<" ";
	}std::cout<<std::endl;
}


int main()
{
	std::array<int,SIZE> arr;
	arr.fill(69);
	display<int>(arr);
	
	arr.at(0) = 11;
	arr.at(4) = 22; 
	display_rev<int>(arr);
	
	return 0;
}
