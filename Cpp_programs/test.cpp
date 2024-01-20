#include<iostream>
using namespace std;


int addition(int &i, int &j)
{
	int ans = i+j;
	return ans;
}


int main()
{
	
	int i;
	int j;
	int ans;

	cout<<"Enter First Number : ";
	cin>>i;
	cout<<"Enter Second Number : ";
	cin>>j;

	ans = addition(i,j);

	cout<<"Addition "<<ans<<endl;

	return 0;
}
