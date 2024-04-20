#include<iostream>
#include<string>
using namespace std;


class MYstring
{
	string str;
	public:
		MYstring(const string str="") : str(str) {}
		
		int MYstrlen()
		{
			int i=0;
			while(str[i] && str[i+1])
			{
				
				i+=2;
			}
			if(str[i] != '\0' && str[i+1] == '\0')
			{
				++i;
			} 
			return i;
		}

};
int main()
{
	string str;
	cin>>str;
	MYstring obj(str);
	cout<<obj.MYstrlen();

	return 0;
}
