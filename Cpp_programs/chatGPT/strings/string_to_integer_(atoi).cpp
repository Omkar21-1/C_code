/*
		Implement the atoi function, which converts a string to an integer. Handle cases of overflow and invalid input.
*/
#include<iostream>
using namespace std;

class MY_ATOI{
	
	private:
		string str;
	public:
		MY_ATOI(string str="") : str(str) {}
		MY_ATOI(MY_ATOI &tob) : str(tob.str) {}
		
		int MY_atoi()
		{
			int num = 0;
			int i = 0;
					
			for(i=0; str[i]; ++i)
			{
				if(str[i]>='0' && str[i]<='9')
				{
					num = num*10;
					num = num+(str[i] - 48);
				}
			}
			return num;
		}
	
		~MY_ATOI() {}
};

int main()
{	
	string str;
	cin>>str;
	MY_ATOI ob(str);
	
	cout<<ob.MY_atoi()<<endl;
	
	return 0;
}
