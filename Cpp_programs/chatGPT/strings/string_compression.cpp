/* 
				Implement a function to perform basic string compression using the counts of repeated characters. For example, the string "aabcccccaaa" would become "a2b1c5a3."
*/
#include<iostream>
#include<string>
using namespace std;




class STRING_COMPRESSION{
	
	private:
		string str;
		
	public:
		STRING_COMPRESSION(string str = "") : str(str) {} 
		STRING_COMPRESSION(STRING_COMPRESSION &temp_obj) : str(temp_obj.str) {}
		
		void compress()
		{
			char buff = str[0];
			int cnt = 0;
			string str1 = "";
			for(int i=0; str[i]; ++i)
			{
				if(buff==str[i])
				{
					++cnt;
					if(buff != str[i+1])
					{
						str1 += str[i];
						str1 += to_string(cnt);
						buff = str[i+1];
						cnt = 0;					
					}					
				}
			}
			cout<<str1<<endl;
		}
};
int main()
{
	string str;
	cin>>str;
	//str = "aabcccccaaa";
	STRING_COMPRESSION obj(str);
	
	obj.compress();


	return 0;
}
