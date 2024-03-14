/*
 * 	CREATING ARRAY OF OBJECT USING POINTER
 *
 *	In This Program I Used The "UPDATE" as an Addititional Featur 
 *
 * */





#include<iostream>
using namespace std;


class STUDENT
{
	private:
		int rno;
		string name;
		float per;
		int application_id;
	public:
		STUDENT(int rno=0, string name="NA", float per=0.00, int application_id=-1) : rno(rno), name(name), per(per), application_id(application_id) {}

		STUDENT(STUDENT &temp_obj) : rno(temp_obj.rno), name(temp_obj.name), per(temp_obj.per), application_id(temp_obj.application_id) {}

		void accept(int rno, string name, float per, int application_id)
		{
			this->rno=rno;
			this->name=name;
			this->per=per;
			this->application_id=application_id;
		}

		void disp()
		{	
			cout<<"Application Id : "<<application_id<<endl;
			cout<<"Roll Number : "<<rno<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Percentage : "<<per<<endl;
			cout<<"- - - - - - - - - - - - - - - - - -"<<endl;
		}
};

int main()
{
	int rno;
	string name;
	float per;

	int n;
	cout<<"How Many Admission(s) : ";
	cin>>n;


	STUDENT *s_ptr = new STUDENT[n];
	
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter Roll Number : ";
		cin>>rno;
		cin.get();
		cout<<"Enter Name : ";
		getline(cin,name);
		cout<<"Enter Percentage : ";
		cin>>per;
		cout<<endl;

		s_ptr[i].accept(rno,name,per,i);
	}

	cout<<"= = = = = = = = = = = = = = = = = = = = ="<<endl<<endl;

	for(int i=0; i<n; ++i)
	{
		s_ptr[i].disp();
	}
	




	bool flag = 1;
	int application_id = -1;
	while(1)
	{
		cout<<endl;
		cout<<"Do You Want To Update Information / data [1/0]: ";
		cin>>flag;
		if(flag==0)
		{
			break;
		}

		cout<<endl<<"Enter Application ID Which You Want to Update : ";
		cin>>application_id;
		if(application_id>=n || application_id<0)
		{
			cout<<endl<<"Application ID Not Found !!!"<<endl;
			break;
		}
		
		cout<<"= = = = = = = = = = = = = = = = = = = = = = "<<endl<<endl;
		cout<<"Enter Roll Number (update) : ";
		cin>>rno;
		cin.get();
		cout<<"Enter Name (update) : ";
		getline(cin,name);
		cout<<"Enter Percentage (update) : ";
		cin>>per;
		s_ptr[application_id].accept(rno,name,per,application_id);
	
		cout<<endl<<"- - - - - - - - - - - - - - - - - -"<<endl;
		cout<<"UPDATED DATA : ";
		s_ptr[application_id].disp();		

		cout<<endl<<endl;
	}



	delete []s_ptr;
	return 0;
}
