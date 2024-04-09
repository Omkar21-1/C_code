/*
	 6.   Write a function that takes an array of integers and removes all occurrences of a specified value, using the Array class.
		2nd sol is down
*/
#include<iostream>
#include<array>
using namespace std;
#define SIZE 5

void swaping(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	array<int,SIZE+5> a = {2,1,2,3,2,4,4,3,2,1};
	int find = 2;
	int n = a.size();

	int i=0;
	int j=n-1;
	while(i<j)
	{
		
		if(a.at(i) == find)
		{
		
			for(j; j>=i; --j)
			{
				if(a.at(j) != find) 
				{
					break;
				}
			}
			swaping(a[i] , a[j]);
			--j;
		}
		++i;
	}n=j;

	
	for(int i=0; i<j; ++i)
	{
		cout<<a.at(i)<<" ";
	}
	
	return 0;
}


/*
void swaping(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	array<int,SIZE> a = {1,2,3,2,4};
	int find = 2;
	int n = a.size();
	
	array<int,SIZE> temp;
	copy(a.begin(), a.end(), temp.begin());
	for(int j=0,i=0; i<a.size(); ++i)
	{
		if(temp[i] != find)
		{
			a[j++] = temp[i];
			--n;
		}
	}++n;
	cout<<endl;
	for(int i=0; i<n; ++i)
	{
		cout<<a.at(i)<<" ";
	}
	
	return 0;
}
*/
