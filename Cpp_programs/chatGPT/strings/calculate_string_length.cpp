#include<iostream>
#include<string>
using namespace std;

class STRLEN
{
	private :
		string str;
		
		
	public :
		STRLEN(string str="") : str(str){}
		
		int strlen()
		{
			int i=0;
			for(i; str[i]; ++i);
			return i;
		}

};

int main()
{
	STRLEN s("HELLO");
	
	cout<<"Length of String : "<<s.strlen()<<endl;
	return 0;
}
