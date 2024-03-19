/*
				Employee Hierarchy: 
						Create a hierarchy of employees such as Manager, Engineer, and Clerk. 
						Each employee type should have common properties like name and salary, and specific properties/methods for each role.
*/

#include<iostream>
using namespace std;



class Employee
{
	protected:
	static int employee_id;
	static int cnt;
	int id;
	string name;
	float salary;
	string position;
	string city;
	public:
		Employee(string name="NA", float salary=0.00, string position="NA", string city="NA") : name(name), salary(salary), position(position), city(city) 
		{
			id = employee_id++;
			++cnt;
		}

		void set_employee_name(string name)
		{
			this->name = name;
		}
		void set_employee_salary(float salary)
		{
			this->salary = salary;
		}
		void set_employee_position(string position)
		{
			this->position = position;
		}
		void set_employee_city(string city)
		{
			this->city = city;
		}
		
		/* GETTER */
		int get_employee_no()
		{
			return this->id;
		}
		string get_employee_name()
		{
			return this->name;
		}
		float get_employee_salary()
		{
			return this->salary;
		}
		string get_employee_position()
		{
			return this->position;
		}
		string get_employee_city()
		{
			return this->city;
		}
		
		void display_information()
		{
			cout<<"Employee Id 		: "<<id<<endl;
			cout<<"Employee Name 		: "<<name<<endl;
			cout<<"Employee Salary 	: "<<salary<<endl;
			cout<<"Employee Position	: "<<position<<endl;
			cout<<"Employee City 		: "<<city<<endl<<endl;
		}
	
		static void no_of_Employees();	
	
					
};
int Employee::employee_id = 101;
int Employee::cnt = 0;
void Employee::no_of_Employees()
{
	cout<<"Total Numbers of Employee in Office : "<<cnt<<endl<<endl;
}
/*====================================================================================*/








/*====================================================================================*/
class Manager : public Employee
{
	private:
		static int Mcnt;
		
	public:
		Manager(string name="NA", float salary=0.00, string position="NA", string city="NA") : Employee(name, salary, position, city) 
		{
			++Mcnt;
		}
		
			
		static void no_of_Manager();	
		friend istream& operator >> (istream& in, Manager& M);
};
int Manager::Mcnt = 0;
void Manager::no_of_Manager()
{
	cout<<"Total Numbers of Manager in Office : "<<Mcnt<<endl<<endl;
}	

istream& operator >> (istream& in, Manager& M)
{	
	cout<<"Enter Manager Name : ";
	getline(in,M.name);
	cout<<"Enter Manager Salary : ";
	in>>M.salary;
	cout<<"Enter Manager Position : ";
	cin.get();
	getline(in,M.position);
	cout<<"Enter Manager City : ";
	cin.get();
	getline(in,M.city);
	cout<<endl;
	return in;
}
/*====================================================================================*/







/*====================================================================================*/
class Engineer : public Employee
{
	private:
		static int Ecnt;

	public:
		Engineer(string name="NA", float salary=0.00, string position="NA", string city="NA") : Employee(name, salary, position, city) 
		{
			++Ecnt;
		}
		
		static void no_of_Engineer();
		friend istream& operator >> (istream& in, Engineer& E);
};
int Engineer::Ecnt = 0;
void Engineer::no_of_Engineer()
{
	cout<<"Total Numbers of Engineer in Office : "<<Ecnt<<endl<<endl;
}

istream& operator >> (istream& in, Engineer& E)
{	
	cout<<"Enter Engineer Name : ";
	getline(in,E.name);
	cout<<"Enter Engineer Salary : ";
	in>>E.salary;
	cout<<"Enter Engineer Position : ";
	cin.get();
	getline(in,E.position);
	cout<<"Enter Engineer City : ";
	cin.get();
	getline(in,E.city);
	cout<<endl;
	return in;
}

/*====================================================================================*/






/*====================================================================================*/
class Clerk : public Employee
{
	private:
		static int Ccnt;
		
	public:
		Clerk(string name="NA", float salary=0.00, string position="NA", string city="NA") : Employee(name, salary, position, city) 
		{
			++Ccnt;
		}

		static void no_of_Clerk();
		friend istream& operator >> (istream& in, Clerk& C);
};
int Clerk::Ccnt = 0;
void Clerk::no_of_Clerk()
{
	cout<<"Total Numbers of Clerk in Office : "<<Ccnt<<endl<<endl;
}

istream& operator >> (istream& in, Clerk& C)
{
	cout<<"Enter Clerk Name : ";
	getline(in,C.name);
	cout<<"Enter Clerk Salary : ";
	in>>C.salary;
	cout<<"Enter Clerk Position : ";
	cin.get();
	getline(in,C.position);
	cout<<"Enter Clerk City : ";
	cin.get();
	getline(in,C.city);
	cout<<endl;
	return in;
}

/*====================================================================================*/



















//- - - - - -- -- - - - --- - - - -- -- -  - -- - - -- - - - - - -  --  - --- - -- -- - -- - - - -  -- - - - - - --  
void start()
{

	int M;
	cout<<"How Many Manager in Company : ";
	cin>>M;
	cout<<endl;
	cin.get();
	Manager *m = new Manager[M]; 
	for(int i=0; i<M; ++i)
	{
		cin>>m[i];
	}
	
	int E;
	cout<<"How Many Engineer in Company : ";
	cin>>E;
	cout<<endl;
	cin.get();
	Engineer *e = new Engineer[E]; 
	for(int i=0; i<E; ++i)
	{
		cin>>e[i];
	}
	
	int C;
	cout<<"How Many Clerk in Company : ";
	cin>>C;
	cout<<endl;
	cin.get();
	Clerk *c = new Clerk[C]; 
	for(int i=0; i<C; ++i)
	{
		cin>>c[i];
	}
	
	
	
	delete []c;
	delete []e;
	delete []m;
}






int main()
{
	start();

	
	
	return 0;
}






































