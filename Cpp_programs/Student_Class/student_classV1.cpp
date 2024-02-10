#include<iostream>
using namespace std;



class STUDENT
{
	private:
		/*	In Private Section Im Declaring Data Members To Store The Student Information.
		 *	"rno" -> For Storing The Roll_Number of The Student.
		 *	"name" -> For Storing Name of The Student.
		 *	"per" -> For Storing The Percentage of The Student.
		 *	"city" -> For Storing The City of Student Where He/She stay's.
		 * */
		int rno;
		string name;
		float per;
		string city;

	public:
		/*	
		 *	In Public Section Im Declaring Member Functions AND Constructor,Distructor.
		 *	
		 *	Constructor ->
		 *			Default,Parameterize And Copied Constructor.
		 *
		 *	Member Functions->
		 *			"update()" For Updating Student Data After He/She Fills The Information
		 *			"display()" For Displaying The Informaion Of Student 
		 * */

		STUDENT(int rno=0, string name="NA", float per=0.00, string city="NA") : rno(rno), name(name), per(per), city(city) {}

		STUDENT(STUDENT &temp_obj) : rno(temp_obj.rno), name(temp_obj.name), per(temp_obj.per), city(temp_obj.city) {} 

		void update(int &rno, string &name, float &per, string &city)
		{
			this->rno = rno;
			this->name = name;
			this->per = per;
			this->city = city;
		}
		void display()
		{
			cout<<"Roll_Number : "<<rno<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Percentage : "<<per<<endl;
			cout<<"City : "<<city<<endl;
			cout<<"- - - - - - - - - - - - - - - - - - -"<<endl;
			cout<<endl;
		}
};


/* FUNCTION DECKERATION */
void start();
int no_of_students();
//void accept(STUDENT *,int &insert);
void display(STUDENT *,int &insert);




int no_of_students()
{
	/*
	*	In This Function Im Taking How Many No. of Students Information is Filling This Application.  
	*/	
	
	int insert;
	cout<<"Enter How Many Student Information You Want To Insert : ";
	cin>>insert;
	cout<<endl;

	return insert;
}

void accept(STUDENT *s,int &insert)
{
	int rno;
	string name;
	float per;
	string city;
	
	for(int i=0; i<insert; ++i)
	{
		cout<<"Enter The Roll_Number : ";
		cin>>rno;
		cin.get();										//To Clear Input Buffer From Keyboard i.e. "\n".
		cout<<"Enter The Name : ";
		getline(cin,name);
		cout<<"Enter Percentage : ";
		cin>>per;
		cin.get();										//To Clear Input Buffer From Keyboard i.e. "\n".
		cout<<"Enter City : ";
		getline(cin,city);	
		cout<<endl;	
		
		s[i].update(rno,name,per,city);
	}
}
void display(STUDENT *s,int &insert)
{	
	cout<<endl<<"================================================="<<endl;
	for(int i=0; i<insert; ++i)
	{
		s[i].display();
	}
}


void start()
{
	int insert = no_of_students();
	STUDENT s[insert];
	
	accept(s,insert);
	display(s,insert);
		
}

int main()
{
	
	start();
	
	return 0;
}
















