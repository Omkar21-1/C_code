#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter How Many Number You Wand To Enter : ";
	cin>>n;
	if(n<=0)
		exit(0);
	int *a = new int [n];
	
	for(int i=0; i<n; ++i)
	{
		cin>>a[i];
	}

	int sum = 0;
	int cnt = 0;
	int avg = 0;

	for(int i=0; i<n; ++i)
	{
		if(a[i]>0)
		{
			sum += a[i];
			++cnt;
		}
	}
	avg = sum/cnt;

	cout<<"Sum is : "<<sum<<endl;
	cout<<"Avg is : "<<avg<<endl;
		
	delete []a;
	return 0;
}
