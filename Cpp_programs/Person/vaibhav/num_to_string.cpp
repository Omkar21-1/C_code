#include<iostream>
#include<algorithm>
using namespace std;



class numToString{
	
	public:		
		static string itos(int num)
		{
			int rem = 0;
			int rev = 0;
			string s = "";
			while(num)
			{
				rem = num%10;
				num = num/10;
				s += rem+48;
			}
			reverse(s.begin(),s.end());
			return s;
		}
};


int main()
{
	cout<<numToString::itos(103)<<endl;
	return 0;
}
