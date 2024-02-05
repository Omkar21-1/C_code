#include<iostream>
#include<string>
using namespace std;

class SMALL_CAPITAL
{
	private:
		string str;
	public:
		SMALL_CAPITAL(string str="") : str(str) {}
		
		string toUpperCase()
		{
			for(int i=0; str[i]; ++i)
			{
				if(str[i] >= 'a' && str[i] <= 'z' )
				{
					str[i] -=32;
				}
			}
			return str;
		}
		string toLowerCase()
		{
			for(int i=0; str[i]; ++i)
			{
				if(str[i] >= 'A' && str[i] <= 'Z' )
				{
					str[i] += 32;
				}
			}
			return str;
		}
};

int main()
{
	string str = "fgh12!!";
	
	SMALL_CAPITAL con(str);
	
	str = con.toUpperCase();
	cout<<"To Upper Case : "<<str<<endl;
	
	str = con.toLowerCase();
	cout<<"To Lower Case : "<<str<<endl;

	return 0;
}
