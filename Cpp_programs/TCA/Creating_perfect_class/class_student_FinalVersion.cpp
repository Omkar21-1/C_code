#include<iostream>
using namespace std;
void accept(string&,string&,float&,string&);
void start();


class STUDENT
{
	/* In Private Section 
	   Additional is Application Id Which Works like SQL serial/Sequence 
	   Which Stores The Record Sequence Wise
	 */
	private:
		int application_id;
		static int sequence;
		string prn_no;
		string name;
		float per;
		string city;

	public:
		STUDENT(string &prn_no ,string &name ,float &per ,string &city)  :  application_id(++sequence), prn_no(prn_no), name(name), per(per), city(city) {} 
	
		void display()
		{
			cout<<"--------------------------------"<<endl;
			cout<<"Application Number : "<< application_id <<endl;
			cout<<"PRN NUMBER : "<< prn_no <<endl;
			cout<<"Name : "<< name <<endl;
			cout<<"Percentage : "<< per <<endl;
			cout<<"City : "<< city <<endl;
		}
		
		~STUDENT(){}	
};
int STUDENT::sequence = 0;


void accept(string &prn_no ,string &name ,float &per ,string &city)
{
	cout<<"Enter PRN NUMBER : ";
	getline(cin,prn_no);
	
	cout<<"Enter Name : ";
	getline(cin,name);
	
	cout<<"Enter Percentage : ";
	cin>>per;
	cin.get();
	
	cout<<"Enter City : ";
	getline(cin,city);
	
	cout<<endl;
}

void start()
{
	string prn_no;
	string name;
	float per;
	string city;
	
	accept(prn_no,name,per,city);
	STUDENT s1(prn_no,name,per,city);	
	
	accept(prn_no,name,per,city);
	STUDENT s2(prn_no,name,per,city);
	
	s1.display();
	s2.display();
}
int main()
{
	start();

	return 0;
}
