#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s1;
	int i = 0;
	
	cout<<"Enter The String : ";
	cin>>s1;
	
	string reverse;
	for(i=s1.size()-1; i>=0; --i)
	{
		reverse += s1[i];					//string CONCATINATE hot ahe ethe
	}
	
	cout<<reverse<<endl;
	

	return 0;
}
