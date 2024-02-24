/*
				invert() banvla ahe
				num reverse
				array reverse
				string reverse
*/

#include<iostream>
#include<iostream>
using namespace std;

class INVERT
{
	public:
		void swap(int &a, int &b)
		{
			a = a^b;
			b = a^b;
			a = a^b;
		}
		void swap(char &a, char &b)
		{
			a = a^b;
			b = a^b;
			a = a^b;
		}		
		
		int invert(int num)
		{
			int rem = 0;
			int rev = 0;
			while(num)
			{
				rem = num%10;
				rev = (rev*10) + rem;
				num = num/10;
			}
			return rev;
		}
		void invert(int *a,int n)
		{
			int i=0;
			--n;
			while(i<n)
			{
				swap(a[i],a[n]);
				++i;
				--n;
			}
		}
		void invert(string &a,int n=0)
		{
			if(n==0)
			{
				n = a.size();
			}
			int i=0;
			--n;
			while(i<n)
			{
				swap(a[i],a[n]);
				++i;
				--n;
			}
		}
		
};




int main()
{
	INVERT ob;
	int n = 5;
	int *a = new int[n];

	
	a[0] = 1,a[1] = 2,a[2] = 3,a[3] = 4,a[4] = 5;
	string c = "Omkar";
		
	cout<<ob.invert(123)<<endl;
	
	ob.invert(a,n);
	cout<< a[0] <<endl;
	
	ob.invert(c);
	cout<< c <<endl;
	
	return 0;
}
