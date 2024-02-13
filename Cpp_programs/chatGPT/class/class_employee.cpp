

/*
			Ya code madhe employ class banvla ahe
			tyachi ID,NAME,AGE,SALARY,CITY,STREET ani pinCode Ashe private data members banvle ahet
			ani mg sada simple tyanna initilize ani mg accept kela ahhe

			ek password function banvla ahe je conform karnar ki user ha NORMEL user ahe ki ROOT user ahe
			ani tya hishobavr konta data dakhvaych te tharnar
			
			normel user asel tr thodi info
			ani
			root user asel tr purna info

*/







#include<iostream>
using namespace std; 



class EMPLOYEE
{
	private:
		int employee_id;
		string employee_name;
		string employee_age;
		float employee_salary;
		string employee_city;
		string employee_street;
		string employee_pinCode;
		
		void root_disp()
		{
			cout<<"Employee_id : "<<employee_id<<endl;
			cout<<"Employee_Name : "<<employee_name<<endl;
			cout<<"Employee_Age : "<<employee_age<<endl;
			cout<<"Employee_Salary : "<<employee_salary<<endl;
			cout<<"Employee_City : "<<employee_city<<endl;
			cout<<"Employee_Street : "<<employee_street<<endl;
			cout<<"Employee_pinCode : "<<employee_pinCode<<endl;
			cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl;
		}
		
	public:
		EMPLOYEE(int employee_id=0, string employee_name="NA", string employee_age="0", float employee_salary=0.00, string employee_city="NA", string employee_street="NA", string employee_pinCode="0000000") : employee_id(employee_id), employee_name(employee_name), employee_age(employee_age), employee_salary(employee_salary), employee_city(employee_city), employee_street(employee_street), employee_pinCode(employee_pinCode) {} 
		
		
		EMPLOYEE(EMPLOYEE &t) : employee_id(t.employee_id), employee_name(t.employee_name), employee_age(t.employee_age), employee_salary(t.employee_salary), employee_city(t.employee_city), employee_street(t.employee_street), employee_pinCode(t.employee_pinCode) {}
		
		
	
		void accept(int &employee_id, string &employee_name, string &employee_age, float &employee_salary, string &employee_city, string &employee_street, string &employee_pinCode)
		{
			this-> employee_id = employee_id;
			this-> employee_name = employee_name;
			this-> employee_age = employee_age;
			this-> employee_salary = employee_salary;
			this-> employee_city = employee_city;
			this-> employee_street = employee_street;
			this-> employee_pinCode = employee_pinCode;
		}		
		
		void display(bool &root)
		{
			if(root)
				root_disp();
			else
				normal_disp();
		}
		
		void normal_disp()
		{
			cout<<"Employee_id : "<<employee_id<<endl;
			cout<<"Employee_Name : "<<employee_name<<endl;
			cout<<"Employee_Age : "<<employee_age<<endl;
			cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl;
		}
		

	~EMPLOYEE(){}
};


void accept(int &employee_id, string &employee_name, string &employee_age, float &employee_salary, string &employee_city, string &employee_street, string &employee_pinCode)
{
	cout<<"Employee_id : ";
	cin>>employee_id;
	cin.get();
	
	cout<<"Employee_Name : ";
	getline(cin,employee_name);
	
	cout<<"Employee_Age : ";
	cin>>employee_age;
	
	cout<<"Employee_Salary : ";
	cin>>employee_salary;
	cin.get();
	
	cout<<"Employee_City : ";
	getline(cin,employee_city);
	
	cout<<"Employee_Street : ";	
	getline(cin,employee_street);
	
	cout<<"Employee_pinCode : ";
	getline(cin,employee_pinCode);
	
	cout<<endl;
}

bool root_user()
{
	cout<<endl;
	string password;
	cout<<"Enter A Password : ";
	cin>>password;
	if(password == "omkar")
	{
		cout<<"You Are Root User "<<endl<<endl;
		return 1;
	}
	cout<<"You Are Normal User "<<endl<<endl;
	return 0;
}


int main()
{
	
	int employee_id;
	string employee_name;
	string employee_age;
	float employee_salary;
	string employee_city;
	string employee_street;
	string employee_pinCode;
	
	
	int n;
	cout<<"How Many Employee Data You Want To Insert : ";
	cin>>n;
	cin.get();
	
	EMPLOYEE *e = new EMPLOYEE [n]; 
	
	for(int i=0; i<n; ++i)
	{	
		accept(employee_id, employee_name, employee_age, employee_salary, employee_city, employee_street, employee_pinCode);
		e[i].accept(employee_id, employee_name, employee_age, employee_salary, employee_city, employee_street, employee_pinCode);
	}	
	
	
	
		
	bool root = root_user();
	
	cout<<"Employee Information "<<endl<<"================================================"<<endl;
	for(int i=0; i<n; ++i)
	{
		e[i].display(root);
	}
	
	
	
	delete []e;

	return 0;
}
