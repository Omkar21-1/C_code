/* 

				String Rotation:
				Write a program to check if one string is a rotation of another. For example, "waterbottle" is a rotation of "erbottlewat."

*/
#include<iostream>
#include<string>
using namespace std;

class STRING_ROTATION
{
	private :
		string str1;
		string str2;
		
	public :
		STRING_ROTATION(string str1="", string str2="") : str1(str1), str2(str2) {}
		
		bool check_one_string_is_rotation_of_anothor()
		{
			int len1 = str1.length();
			int len2 = str2.length();
			if(len2 == len2)
			{	
				string temp1;
				string temp2;
				for(int i=0; str1[i]; ++i)
				{
					temp1 = str1;
					temp2 = str1;
					
					temp1  = temp1.substr(0,i);
					temp2.erase(0,i);
					temp2.append(temp1);
					
					if(temp2==str2)
					{
						return 1;
					}
				}
			}
			return 0;
		}





};

int main()
{	
	string str1,str2;
	cin>>str1;
	cin>>str2;

	STRING_ROTATION s(str1,str2);
	
	cout<<s.check_one_string_is_rotation_of_anothor()<<endl;


	return 0;
}
