/*
		Create a function to determine if a given string can be rearranged to form a palindrome.
*/


#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool check_anagram_palindrome(string str)
{
	//sort(str.begin(), str.end());
	
	for(int i=0; str[i]; ++i)
	{
		str[i] = tolower(str[i]);
	}
	
	char result = 0;
		
	for(int i=0; str[i]; ++i)
	{
		result = result ^ str[i];
	}
	
	if(result == 0)
	{
		return 1;
	}	
	else if(str.find(result) < str.length())
	{	
		return 1;
	}
		
	return 0;
}




int main()
{
	string str;
	cin>>str;
	
	cout<<check_anagram_palindrome(str)<<endl;





	return 0;
}
