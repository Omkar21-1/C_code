/* Write a C++ program to check if two strings are anagrams of each other. */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class ANAGRAM
{
	private:
		string str1;
		string str2;	
	
	public:
		ANAGRAM(string &str1, string &str2) : str1(str1),str2(str2) {}
	
		bool check_anagram()
		{			 
			if(str1.size() != str2.size())
			{
				return 0;
			}
			
			sort(str1.begin(), str1.end());
			sort(str2.begin(), str2.end());
			
			
			/*
			For Intiger Array Sorting
			
			sort(str1, str1 + str1.size());
			sort(str2, str2 + str2.size());
			
			
			std::sort(str.begin(), str.end()); //sort it
			std::reverse(str.begin(), str.end()); //reverse it
			
			*/
		
			/*
			if(str1 != str2)
			{
				return 0;
			}*/
			
			return (str1 == str2);			
		}		



};


int main()
{
	string s1;
	string s2;
	
	cout<<"Enter String 1 : ";
	cin>>s1;
	cout<<"Enter String 2 : ";
	cin>>s2;
	
	ANAGRAM a(s1,s2);
	
	cout<<a.check_anagram()<<endl;
	
	return 0;
}
