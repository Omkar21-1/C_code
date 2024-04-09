/*
	 2.   Implement a function that takes two arrays as input and returns true if they have the same elements in the same order, otherwise return false.
*/
#include<iostream>
#include<array>
using namespace std;
#define SIZE 5

int main()
{
	array<int,SIZE> a = {11,22,33,44,55};
	array<int,SIZE> b = {11,22,33,44,55};
	
	
	if(a==b)
	{
		cout<<"True : both are equals array.."<<endl;
	}
	else 
		cout<<"False : both are'nt equals array.."<<endl;
	
	a = {11,22,33,44,25};
	
	if(a<b)
	{
		cout<<" : a < b.."<<endl;
	}
	else if(a>b)
		cout<<" : a > b.."<<endl;
	
	
	return 0;
}
