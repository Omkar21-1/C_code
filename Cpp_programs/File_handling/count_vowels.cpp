#include<iostream>
#include<fstream>
using namespace std;

inline bool vowels(char &ch)
{
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		return true;
	}
	return false;
}


ifstream open_file_for_read()
{
	ifstream fin;
	string file_name;
	cout<<"Enter File Name To Open File in Read Mode : ";
	cin>>file_name;
	fin.open(file_name,ios::in);
	if(!fin.is_open())
	{
		cout<<"File Not Found!!"<<endl;
		exit(0);
	}
	return fin;
}

void check_count_of_vowels(istream &fin)
{
	int v_cnt=0;
	while(1)
	{
		char ch = fin.get();
		if(ch == EOF)
		{
			break;
		}
		if( vowels(ch) )
		{
			++v_cnt;	
		}
	}
	cout<<"Count Of Vowels in Given File : "<<v_cnt<<endl;
}



int main()
{
	ifstream fin = open_file_for_read();
	
	check_count_of_vowels(fin);

	fin.close();
	return 0;
} 
