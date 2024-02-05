/* Create a function to remove all spaces from a given string. 

    string removeSpaces(const string &str) {
    string result;

    for (char ch : str) 
    {
       	// Check if the character is not a space
        if (ch != ' ') 
        {
            result += ch;
        }
    }
    return result;
}
*/

#include<iostream>
#include<string>
using namespace std;



class REMOVE_SPACE
{
	private:
		string target;
	
	
	public:
		REMOVE_SPACE(string target = "") {}
		
		void remove_spaces_from_string(string &target)
		{	
			int space = 0; 
			int i = 0;
			char temp;
			
			for(i; target[i]; ++i)
			{
				if(target[i] != ' ')
				{
					//SWAP space to next nonspace character
					temp = target[i];
					target[i] = target[space];
					target[space] = temp;
					++space;		
				}
			}
			target[space] = '\0';
		}
};





int main()
{
	string ss = "Hello_  Wo   rld   ";
	
	REMOVE_SPACE s;
	
	
	cout<<"Before : "<<ss<<"  "<<ss.size()<<endl;
		
	s.remove_spaces_from_string(ss);

	cout<<"After : "<<ss<<"  "<<ss.size()<<endl;	

	return 0;
}
