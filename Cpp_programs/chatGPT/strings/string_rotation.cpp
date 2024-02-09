/* 

						String Rotation:
						Write a program to rotate string n = 3, "waterbottle" = "erbottlewat."

*/
#include<iostream>
#include<string>
using namespace std;

class STRING_ROTATION
{
	private:
		string str;
			
	public:
		STRING_ROTATION(string str="") : str(str) {}
		
		void rotate_string(int n=0)
		{
			int len = str.length();
			if(len<n)
			{
				while(len<n)
				{
					n = n - len;
				}
			}
			
			string temp1 = str;
			string temp2 = str;
			
			temp1  = temp1.substr(0,n);
			temp2.erase(0,n);
			temp2.append(temp1);
			
			cout<<temp2<<endl;
		}


};


int main()
{
	string str = "waterbottle";
	int n;
	
	cout<<"How Many Character You Want To Rotate : ";
	cin>>n;
	
	
	STRING_ROTATION r(str);
	r.rotate_string(n);

	return 0;
}
