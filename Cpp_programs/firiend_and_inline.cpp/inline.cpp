#include<iostream>
using namespace std;






inline int sqr(int x)
{
	return (x*x);
}





int main()
{	
	int sq,num;
	
	cin>>num;
	
	sq = sqr(num);

	cout<<"Square : "<<sq<<endl;

	return 0;
}
