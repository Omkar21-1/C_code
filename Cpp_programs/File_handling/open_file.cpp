#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("a.txt",ios::in);
	if(! fin.is_open())
	{
		cout<<"File Not Found!!"<<endl;
		exit(0);
	}
	while(1)
	{
		char ch = fin.get();
		if(ch==EOF)
		{
			break;
		}
		cout<<ch;
	}


	return 0;
}
