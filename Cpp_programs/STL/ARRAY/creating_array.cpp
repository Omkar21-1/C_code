#include<iostream>
#include<array>
#define SIZE 5

using namespace std;

template <class td> 
void disp1d(array<td,SIZE> &arr)
{
	cout<<"Elements Of An Array : ";
	for(int i=0; i<arr.size(); ++i)
	{
		cout<<arr.at(i)<<" ";
	}
	cout<<endl;
}
template <class td>
void disp2d(array<array<td,SIZE>,SIZE> &mat)
{
	cout<<"Matrix Elements : "<<endl;
	for(int i=0; i<mat.size(); ++i)
	{
		for(int j=0; j<mat[i].size(); ++j)
		{
			cout<<mat[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl;
}



int main()
{
	array<int,SIZE> a;
	a.fill(21);
	disp1d<int>(a);
	
	array<array<int,SIZE>,SIZE> mat;
	mat[2].fill(1);
	disp2d<int>(mat);
	
	
	array<string,SIZE> str = {"1.Omkar_Kshirsagar","2.Vaibhav_Kshirsagar"};
	
	disp1d<string>(str);
	
	return 0;
}
