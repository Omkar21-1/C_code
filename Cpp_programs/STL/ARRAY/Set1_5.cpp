/*
	 5.   Implement a program to merge two sorted arrays into a single sorted array using the Array class.
*/
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
#define SIZE 5


template <class td>
void mergeArray(array<td,SIZE+SIZE> &a,array<td,SIZE> &b)
{

	int i=SIZE;	
	int j = 0;
	while(j<b.size())
	{
				
		a.at(i) = b.at(j);
		++i;
		++j;
	}
	sort(a.begin(),a.end());	

	for(auto i=a.begin(); i<a.end(); ++i)
	{
		cout<<*i<<" ";
	}cout<<endl;

}


int main()
{
	array<int,SIZE+SIZE> a{11,22,44,66,77};
	array<int,SIZE> b{33,1,88,99,100};
	
	mergeArray<int>(a,b);

	return 0;
}
