#include<iostream>
#include<fstream>
using namespace std;

class Login
{
	private:
		string userName;
		string password;
		ifstream Registeres_user_file;
	public:
		Login(string userName = "NA", string password = "NA") : userName(userName),password(password) 
		{
			Registeres_user_file.open("Registeres_user_file.txt",ios::app);
		}
		Login(Login &treg) : userName(treg.userName),password(treg.password) 
		{
			Registeres_user_file.open("Registeres_user_file.txt",ios::app);
		}
		
		void setUserName(string &userName)
		{
			this->userName = userName;
		}
		void setPassword(string &password)
		{
			this->password = password;
		}
		
		string getUserName()
		{
			return this->userName;
		}
		string getPassword()
		{
			return this->password;
		}
		
		
		void login_user()
		{
			Login temp;
			bool flag = 1;
			while (Registeres_user_file >> temp.userName >> temp.password)
			{
				if(userName == temp.userName && password == temp.password) 
				{
					flag = 0;
					break;
				}
			}
			if(flag)
			{
				cout<<"UserName And Password NOT FOUND!!!"<<endl<<"Please Register First"<<endl;
				Registeres_user_file.close();
				exit(0);
			}
			cout<<"Logined SuccesFully :)"<<endl;			
		}
		
		~Login()
		{
			Registeres_user_file.close();
		}
};

