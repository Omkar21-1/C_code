#include<iostream>
using namespace std;





class STUDENT
{
	private:
		int application_id;
		string name;
		float per;
		string city;
		static int sequence;										//to start application_id by sequence and Incremented by +1 for next student
	
	public:
		STUDENT()
		{
			application_id = sequence;
			++sequence;
		}
		
		void accept()
		{
			
			cout<<"Enter Name : ";
			getline(cin,name);
			cout<<"Enter Percentage : ";
			cin>>per;
			cin.get();										//Clear Buffer From Keyboard
			cout<<"Enter City : ";
			getline(cin,city);
			cout<<endl;
		}
		void display()
		{
			cout<<application_id <<"\t\t" <<name <<"\t\t" <<per <<"\t\t" <<city <<endl;
		}
		
	
};
int STUDENT::sequence = 100;


int main()
{
	int insert;
	cout<<"Enter How Many Records You Want To Insert : ";
	cin>>insert;
	cin.get();										//Clear Buffer From Keyboard
	
	STUDENT s[insert];
	for(int i=0; i<insert; ++i)
	{
			s[i].accept();
	}
	
	cout<<"application_id" <<"\t" <<"name" <<"\t\t" <<"percentage" <<"\t" <<"city" <<endl;
	for(int i=0; i<insert; ++i)
	{
		s[i].display();
	}
	
	return 0;
}
