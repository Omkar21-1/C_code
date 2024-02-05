#include<iostream>
#include<string>
using namespace std;


class PALINDROME
{
	private:
		string str;
	
	
	public:
		PALINDROME(string &str) : str(str){}
	
		void check_palindrome()
		{
			int i = str.size()-1;
			int j = 0;
			bool flag = 1;
			while(i>j)
			{
				if(str.at(i) != str.at(j) )
				{
					flag = 0;
					break;
				}
				--i;
				++j;		
			}
			if(flag)
			{
				cout<<"Given String Is Palinderome !!";
			}
			else
			{
				cout<<"Given String Is Not Palinderome !!";
			}	
		}
		~PALINDROME(){}
};



int main()
{
	string str;
	cout<<"Enter The String : ";
	cin>>str;
	
	
	PALINDROME p(str);
	p.check_palindrome();

	return 0;
}
