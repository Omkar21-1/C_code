#include<iostream>
using namespace std;

class CAR
{
	private:
	int car_id;						//To Store The Car Id as Primary key
	string car_name;					//To store the car name
	string car_model;					//to store the car model
	string car_number;					//to Store the car number plate
	
	public:
		void accept()							//to accept all detials from user
		{
			cout<<"Enter Car ID : ";
			cin>>car_id;
			cout<<"Enter Car Name : ";
			cin.get();						//to clear the buffer from keybaord
			getline(cin,car_name);
			cout<<"Enter car Model : ";
			getline(cin,car_model);
			cout<<"Enter car Nummber : ";
			getline(cin,car_number);
			cout<<endl;
		}
		void display()
		{
			cout<<car_id<<" "<<car_name<<" "<<car_model<<" "<<car_number<<endl;
		}
};

int main()
{	
	int insert;
	cout<<"Enter How Many Record's You Want To Insert : ";
	cin>>insert;
	cout<<endl;
	
	if(insert<1)
	{
		cout<<"Cannot Create a Object with Entered Size"<<std::endl;
                exit(0);	
	}
	CAR record[insert];						//To create Array of Object What user is required
	
	for(int i=0; i<insert; ++i)
	{
		record[i].accept();
	}
	for(int i=0; i<insert; ++i)
	{
		record[i].display();
	}

	return 0;
}
