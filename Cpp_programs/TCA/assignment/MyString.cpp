#include<iostream>
#include<cstring>
using namespace std;

class Mystring
{
	private:
		char *s;
	public:
		Mystring(){}
		Mystring(const char *temp) 
		{
			if(strlen(temp)>100)
			{
				 cout<<"Cant Give memory!!!\n";
				 exit(0);
			}
			s = new char[strlen(temp) + 1];
			strcpy(s, temp);
		}
		
		
		char* operator + (Mystring& sob)
		{
			if( (strlen(this->s)+strlen(sob.s)) > 99)
			{
				cout<<"Cant Perform String Concatination!!!\n";
				exit(0);
			}
			strcat(this->s,sob.s);
			return this->s;
		} 
		
		
		friend istream& operator >> (istream& in, Mystring& ob);
		friend ostream& operator << (ostream& out, Mystring& ob);
		
		
		~Mystring()
		{
			delete []s;
		}
};

istream& operator >> (istream& in, Mystring& ob)
{
	char temp[100];
	in>>temp;
	delete[] ob.s;
	ob.s = new char[strlen(temp) + 1];
	
	strcpy(ob.s, temp);
	return in;
}

ostream& operator << (ostream& out, Mystring& ob)
{
	out<<ob.s;
	return out;
}


int main()
{	
	
	Mystring ob1;
	cout<<"Enter string : ";
	cin>>ob1;
	cout<<"Entered String Is : "<<ob1<<endl<<endl;
	
	Mystring ob2;
	cout<<"Enter string : ";
	cin>>ob2;
	cout<<"Entered String Is : "<<ob2<<endl<<endl;
	
	cout<<endl<<"Conactination : "<<ob1+ob2<<endl;
		
	return 0;
}


