/*
		Write a program that reverses the order of words in a given sentence. For example, "Hello World" should become "World Hello."
*/


#include<iostream>
#include<string>
using namespace std;

class WORD_REVERSAL
{
	private:
		string str;
		
	public:
		WORD_REVERSAL(string str = "") : str(str) {}
		WORD_REVERSAL(WORD_REVERSAL &temp_obj) : str(temp_obj.str) {}
		
		void word_reverse()
		{
			int start = str.length()-1;
			int letter_cnt = 0;
			string temp;
			
			while(start)
			{
				if(str[start]==' ')
				{
					temp += str.substr(start+1,letter_cnt);
					if(str[start-1]!=' ')
					{
						temp += ' ';
					}
					letter_cnt = 0;
				}
				else
				{
					++letter_cnt;
				}
				--start;
			}
			temp += str.substr(start,letter_cnt+1);
			if(temp[0]==' ')
			{
				temp = temp.erase(0,1);
			}
			cout<<temp<<endl;
		}
};

int main()
{
	string str;
	getline(cin,str);
	WORD_REVERSAL ob(str);
	ob.word_reverse();

	return 0;
}
