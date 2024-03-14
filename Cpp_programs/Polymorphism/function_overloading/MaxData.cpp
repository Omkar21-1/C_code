#include<iostream>
using namespace std;
/*
	2 maxData() banvlet te maximum kadun det ahet
*/


class MAXDATA{

	public:
		int maxData(int a, int b)
		{
			return a>b ?a :b;	
		}
		int maxData(int *a, int n)
		{
			int max = a[n-1];
			for(int i = n-1; i; --i)
			{
				if(max<a[i])
				{
					max = a[i];
				}
			}
			if(max<a[0])
			{
				return a[0];
			}
			return max;
		}

};


int main()
{
	MAXDATA ob;
	int a[5] = {5,2,3,2,6};
	cout<<ob.maxData(a,5)<<endl;
	
	return 0;
}
