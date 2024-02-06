/* Create a program to find the first non-repeating character in a string. */

#include<iostream>
#include<string>
using namespace std;

class FIND_non_repeating_char
{
	private:
		string str;
	
	public:
		FIND_non_repeating_char(string str="") : str(str) {}
		
		int find()
		{
			int strlen = str.length();
			int i = 0;
			for(i=0; str[i]; ++i)
			{
				if(str.find_first_of(str[i]) == str.find_last_of(str[i]))		//jr te specific character ekdach ala asel ter tyachi index last_of la ani first_of la samech asnar
				{
					return i;
				}
			}
			return -1;
		}
		~FIND_non_repeating_char() {}

};



int main()
{
	string str;
	cin>>str;
	
	FIND_non_repeating_char obj(str);
	 
	cout<<obj.find()<<endl;
	
	cout<<str.at(obj.find())<<endl;
	
	return 0;
}
