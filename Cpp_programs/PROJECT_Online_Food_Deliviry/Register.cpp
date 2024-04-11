#include<iostream>
#include<fstream>
using namespace std;


class Register
{
	private:
		string userName;
		string password;
		ofstream Registeres_user_file;
	public:
		Register(string userName = "NA", string password = "NA") : userName(userName),password(password) 
		{
			Registeres_user_file.open("Registeres_user_file.txt",ios::app);
		}
		Register(Register &treg) : userName(treg.userName),password(treg.password) 
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
		void register_user()
		{
			Registeres_user_file << userName << " " << password << " " << endl;
		}
		
		
		~Register()
		{
			Registeres_user_file.close();
		}
};

