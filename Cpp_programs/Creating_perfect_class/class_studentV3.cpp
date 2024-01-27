#include<iostream>
using namespace std;

class Student
{
	private:
		string RBT_no;
		string studentName;
		float OOP;
		float FCP;
		float LANG;
		float percentage;
		string grade;
	
	public:
		void accept()
		{
			cin.get();										//Clearing Buffer From Keyboard if Some Task is Performend Befor Calling This Function
			cout<<"Enter RBT NO : ";								//Accepting RBT no From User
			getline(cin,RBT_no);									//Storing it in "RBT_no"
				
			//cin.get();										//Clearing Buffer Form Keyboard
			cout<<"Enter Student Name : ";								//Accepting Student Name From User
			getline(cin,studentName);								//Storing Student name in "studentName"

			cout<<"Enter Object Oriented Programming (OOP) Marks : ";				//Accepting OOP Marks From User 
			cin>>OOP;										//Storing it in "OOP"
			cout<<"Enter Fundamentels of C Programming (FCP) Marks : ";				//Accepting FCP Marks Form User
			cin>>FCP;										//Storing it in "FCP"
			cout<<"Enter Language (Englis/Germen/Japnise/Freanch) Marks : ";			//Accepting Language Marks From Student
			cin>>LANG;										//Storing it in "LANG"
			
			calculate_percentage();									//After Accepting Marks Calculating The The Percentage
			calculate_grade();									//Giving the Grades According To The Percentage
		}
		void calculate_percentage()
		{
			#define OUTOF 300									//Using For Calculating Percentage
			
			if( OOP>100 || FCP>100 || LANG>100 || OOP<0 || FCP<0 || LANG<0 )
			{
				cout<<"Entered Marks Are Not Valid !!!"<<endl;
				exit(0);
			}
			
			percentage = ((OOP + FCP + LANG)/OUTOF)*100;						//Calculating Percentage From Marks And Storing it in "percentage"
		}
		void calculate_grade()
		{
			if(percentage >= 70)									//If Percentage is Greater Than 70 Then GRADE Will be "O" 
			{
				grade = "O";
			}
			else if(percentage >= 60)								//If Percentage is Greater Than 60 Then GRADE Will be "A"
			{
				grade = "A";
			}
			else if(percentage >= 50)								//If Percentage is Greater Than 50 Then GRADE Will be "B"
			{
				grade = "B";
			}
			else if(percentage >= 40)								//If percentage is Greater Than 40 Then GRADE Will be "C"
			{
				grade = "C";
			}
			else 											//Else FAIL "F"
			{
				grade = "F";
			}
		}
		void display()
		{	
			cout<<RBT_no << "\t    "<<studentName << "\t      " <<percentage << " \t " <<grade <<endl; 
		}
};

void how_many_records_to_insert(int &total_records)
{
	//For Creating "total_records" Size of Arrray of Object
	
	cout<<"How Many Records You Want To Store : ";
	cin>>total_records;
	if(total_records <= 0)											//Termaniting The Program if Size of Array is Negatiove or Zero
	{
		exit(0);
	}
}

void student_records(int &total_records)
{
	Student record[total_records];

	for(int i=0; i<total_records; ++i)									//Accepting Students Detials From User
	{
		record[i].accept();
	}
	
	cout<<"RBT_NUMBER " <<" NAME    " <<" PERCENTAGE " <<" GRADE " <<endl;					//Displaying Recoeds in Table Form
	for(int i=0; i<total_records; ++i)
	{
		record[i].display();
	}
}


int main()
{
	int total_records = 0;											//For Creating Array of Object of size "total_records"
	how_many_records_to_insert(total_records);		

	student_records(total_records);										//Calling student_records Function to accept Recprds and Display it

	return 0;
}
