#include<iostream>
using namespace std;

class EMPLOYEE;
class PROJECT;


/*Here this (EMPLOYEE) class is for storing information of employee_id, employee_name,employee_phoneNo,employee_address,etc.*/

class EMPLOYEE
{
	protected:
		int employee_id;
		string employee_name;
		string position;
		static int auto_employee_id;
		
	private:
		string employee_phoneNo;
		string employee_address;
	public:
		EMPLOYEE(string employee_name="NA",string position="NA", string employee_phoneNo="NA", string employee_address="NA") : employee_name(employee_name),position(position), employee_phoneNo(employee_phoneNo), employee_address(employee_address)
		{
			employee_id = auto_employee_id++;
		}
		
		EMPLOYEE(EMPLOYEE &e_tob) : employee_name(e_tob.employee_name), position(e_tob.position), employee_phoneNo(e_tob.employee_phoneNo), employee_address(e_tob.employee_address) ,employee_id(e_tob.employee_id) {}
		
		void accept()
		{
			cout<<"Enter Data for [ "<< employee_id << " ] Employee : "<<endl;
			cout<<"Enter Employee Name : ";
			getline(cin,employee_name);
			cout<<"Enter Employee Position : ";
			getline(cin,position);
			cout<<"Enter Employee Phone Number : ";
			getline(cin,employee_phoneNo);
			cout<<"Enter Employee Address : ";
			getline(cin,employee_address);			
			cout<<endl;
		}
		void display()
		{
			cout<< "Employee Id : "<< employee_id << endl << "Employee Name : " << employee_name << endl << "Employee Position : " << position <<endl<<endl;
		}
		
		friend istream& operator >>(istream& in, EMPLOYEE &e); 
		friend bool search(EMPLOYEE *e, int ecnt, PROJECT *p, int pcnt);
		
		
		~EMPLOYEE()
		{
		
		}
};
int EMPLOYEE::auto_employee_id = 101;

/*Here I'm Overloading the ">>" operator for accepting Employee Information*/
istream& operator >>(istream &in, EMPLOYEE &e)
{
	cout<<"Enter Data for [ "<< e.employee_id << " ] Employee : "<<endl;
	cout<<"Enter Employee Name : ";
	getline(in,e.employee_name);
	cout<<"Enter Employee Position : ";
	getline(in,e.position);
	cout<<"Enter Employee Phone Number : ";
	getline(in,e.employee_phoneNo);
	cout<<"Enter Employee Address : ";
	getline(in,e.employee_address);
	cout<<endl;
	
	return in;
}
//--------------------------------------------------------------------------------------------------------------------------



;


/* Here class (PROJECT) is used for storing project info */
class PROJECT{
	protected:
		static int auto_project_id;
		int project_id;
		string project_name;
		string project_description;
		string project_start_date;
		string project_end_date;
		int *emp_id;
		int emp_count;
	public:
		PROJECT(string project_name="NA", string project_description="NA", string project_start_date="NA", string project_end_date="NA") : project_name(project_name), project_description(project_description), project_start_date(project_start_date), project_end_date(project_end_date)
		{
			project_id = auto_project_id++;
			emp_id = NULL;
			emp_count = 0;
		}
		
		PROJECT(PROJECT &p_tob) : project_name(project_name), project_description(p_tob.project_description), project_start_date(p_tob.project_start_date), project_end_date(p_tob.project_end_date),emp_id(p_tob.emp_id), emp_count(p_tob.emp_count), project_id(p_tob.project_id) {}
		
		
		void accept()
		{
			cout<<"Enter Data for [ "<< project_id << " ] Project : "<<endl;
			cout<<"Enter Project Name : ";
			getline(cin,project_name);
			cout<<"Enter Project Description : ";
			getline(cin,project_description);
			cout<<"Enter Project Start Date : ";
			getline(cin,project_start_date);
			cout<<"Enter Project End Date : ";
			getline(cin,project_end_date);
	
			cout<<endl<<"How Many Employees Works on This Project : ";
			cin>>emp_count;
			emp_id = new int[emp_count];
			for(int i=0; i<emp_count; ++i)
			{
				cout<<"\t Enter Employee ID : ";
				cin>>emp_id[i];
			}cout<<endl;
			cout<<endl;
		}
		
		void display()
		{
			cout<< "Project Id : " << project_id << endl <<  "Project Name : " << project_name << endl << "Project Description : " << project_description << endl << "Project Start Date : " << project_start_date << endl << "Project End Date : " << project_end_date <<endl<<endl;
			
			cout<<"\t " << emp_count << " Employees Works in [" << project_name << "] project : "<<endl;
			for(int i=0; i<emp_count; ++i)
			{
				cout<< "\t Employee Id : " << emp_id[i] << endl;
			}
		}
				
		
		friend istream& operator >>(istream &in, PROJECT &p);
		friend bool search(EMPLOYEE *e, int ecnt, PROJECT *p, int pcnt);
		
		~PROJECT()
		{
			delete []emp_id;
		}
};
int PROJECT::auto_project_id = 201;
istream& operator >>(istream &in, PROJECT &p)
{
	cout<<"Enter Data for [ "<< p.project_id << " ] Project : "<<endl;
	cout<<"Enter Project Name : ";
	getline(in,p.project_name);
	cout<<"Enter Project Description : ";
	getline(in,p.project_description);
	cout<<"Enter Project Start Date : ";
	getline(in,p.project_start_date);
	cout<<"Enter Project End Date : ";
	getline(in,p.project_end_date);
	
	cout<<endl<<"How Many Employees Works on This Project : ";
	in>>p.emp_count;
	p.emp_id = new int[p.emp_count];
	for(int i=0; i<p.emp_count; ++i)
	{
		cout<<"\t Enter Employee ID : ";
		in>>p.emp_id[i];
	}
	cin.get();
	cout<<endl<<endl;
	
	
	return in;
}
//----------------------------------------------------------------------------------------------------------------------





bool search(EMPLOYEE *e,int ecnt, PROJECT *p, int pcnt)
{
	cin.get();
	char find = 0;
	int id=0;
	cout<<endl<<"1. Search Project by Employee Id \n2. Search Employee by Project Id \nEnter Options : ";
	cin>>find;
	if(find == '1')
	{
		bool flag = 0;
		cout<<"\n\nEnter Employee Id : ";
		cin>>id;
		cout<<endl<<endl;
		for(int i=0; i<pcnt; ++i)
		{
			for(int j=0; j<p[i].emp_count; ++j)
			{
				if(id == p[i].emp_id[j])
				{
					flag = 1;
					break;
				}
			}
			if(flag)
			{
				cout<<"\n\n\n\n\n\nDetials Of The project [ " << id << " ]Employee is working on -> \n"<<endl<<endl;
				p[i].display();
				return true;
			}
		}
		cout<<"\n\n\n\n\nEntered Employee Id is Not Valid !!! "<<endl;
		return false;
		
	}
	else if(find == '2')
	{
		bool flag = 1;
		cout<<"\n\nEnter Project Id : ";
		cin>>id;
		cout<<endl<<endl;
		PROJECT *ptr = NULL;
		
		for(int i=0; i<pcnt; ++i)
		{
			if(p[i].project_id == id)
			{
								
				ptr = &p[i];
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			cout<<"\n\n\n\n\nEntered Project Id is Not Valid !!! "<<endl;
		}
		else
		{
			flag = 1;
			cout<<"Detials Of Entered Project Id -> \n\n"<<endl;
			ptr->display();
			cout<<endl;
			
			cout<<"\n\n\n\n\n\nDetials Of The Employee's That Are Working on Above project -> \n"<<endl<<endl;
			
			for(int i=0; i<ecnt; ++i)
			{	
				for(int j=0; j<ptr->emp_count; ++j)
				{
					if(e[i].employee_id == ptr->emp_id[j])
					{
						e[i].display();
						cout<<"x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<endl;
						flag = 0;
						break;
					}
				}
			}
			if(flag)
			{
				cout<<"OPP'S No Record Found !!!!"<<endl<<endl;
			}
			return true;	
		}
	}
	return false;
}










void start()
{	
	int e_cnt = 0;
	int p_cnt = 0;
	EMPLOYEE *eob = NULL;
	PROJECT *pob = NULL;
	
	cout<<"How Many Employees Record You Want To Insert : ";
	cin>>e_cnt;
	eob = new EMPLOYEE[e_cnt];
	
	cout<<"How Many Projects Record You Want To Insert : ";
	cin>>p_cnt;
	pob = new PROJECT[p_cnt];
	
	
	
	for(int i=0; i<e_cnt; ++i)
	{
		cin>>eob[i];
	}
	for(int i=0; i<e_cnt; ++i)
	{
		cin>>pob[i];
	}


	cout<<endl<<endl<<"Displaying Employee Information ::--> "<<endl<<endl;
	cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\nx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x" << endl << endl;
	
	for(int i=0; i<e_cnt; ++i)
	{
		eob[i].display();
	}
	
	cout << endl << "\n\nx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n\n\n\n\n\n" << endl << endl;
	
	
		
	cout<<endl<<endl<<"Displaying Project Information ::--> "<<endl<<endl;
	cout << endl << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x" << endl << endl;
	
	for(int i=0; i<p_cnt; ++i)
	{
		pob[i].display();
	}
	
	cout << endl << "\n\nx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
	
	
	
	search(eob,e_cnt,pob,p_cnt);
	
}















int main()
{
	start();
	
	return 0;
}
























































































/* Here class (TASK) is used for storing information about the task */
/*
class TASK{
	protected:
		static int auto_task_id;
		int task_id;
		string task_description;
		string task_due_date;
		string task_status;
	public:
		TASK(string task_description="NA", string task_due_date="NA", string task_status="NA") : task_description(task_description), task_due_date(task_due_date), task_status(task_status)
		{
			task_id = auto_task_id++;
		} 
		TASK(TASK &t_tob) : task_description(t_tob.task_description), task_due_date(t_tob.task_due_date), task_status(t_tob.task_status)
		{
			task_id = t_tob.task_id; 
		}
		friend istream& operator >>(istream &in, TASK &t);		
			
		
		~TASK()
		{
		
		}
	
};
int TASK::auto_task_id = 3330001;
istream& operator >>(istream &in, TASK &t)
{
	cout<<"Enter Task Description : ";
	getline(in,t.task_description);
	cout<<"Enter Task Due Date : ";
	getline(in,t.task_due_date);
	cout<<"Enter Task Status : ";
	getline(in,t.task_status);

	return in;
}
//---------------------------------------------------------------------------------------------------------
*/
