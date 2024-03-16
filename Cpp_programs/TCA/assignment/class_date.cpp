#include<iostream>
#include<stdio.h>
using namespace std;


class DATE 
{

	public:
		string dd;
		string mm;
		string yy;
		
		DATE(string dd="01", string mm="01", string yy="1900") : dd(dd), mm(mm), yy(yy) {} 
		DATE(DATE &t) : dd(t.dd), mm(t.mm), yy(t.yy) {}
};


class STUDENT
{
	private:
		int rno;
		string name;
		DATE d;
	public:
		
		STUDENT(int rno=0, string name="NA" ,string dd="01", string mm="01", string yy="1900") : rno(rno), name(name), d(dd,mm,yy) {}
		STUDENT(int rno, string name, DATE d) : rno(rno), name(name), d(d) {}
		STUDENT(STUDENT &t) : rno(t.rno), name(t.name), d(t.d.dd,t.d.mm,t.d.yy) {}
		

		
		
		/* Setter Getter */
		void set_rno(int &rno) 
		{
			this->rno = rno;
		}
		void set_name(string &name) 
		{
			this->name = name;
		}
		int get_rno()
		{
			return this->rno;
		}
		string get_name()
		{
			return this->name;
		}
		
		friend istream& operator >>(istream&, STUDENT&);
		
		void display()
		{
			cout<<"Roll number : "<<rno<<endl;
			cout<<"Name        : "<<name<<endl;
			cout<<"Birth Date  : "<<d.dd<<"-"<<d.mm<<"-"<<d.yy<<endl<<endl;
		}
};

istream& operator >>(istream &in, STUDENT &t)
{
	cout<<"Enter Your Roll Number : ";
	in>>t.rno;
	cout<<"Enter Your Name        : ";
	in>>t.name;
	
	/*
	cout<<"Enter Date [dd-yy-mm]  : ";
	scanf("%s-%s-%s",t.d.dd,t.d.mm,t.d.yy);
	*/
	/*
	cout << "Enter Date [dd-yy-mm]  : ";
    	in >> t.d.dd >> t.d.mm >> t.d.yy;
	*/
	
	//using Delimeter
	cin.get();
	cout << "Enter Date [dd-yy-mm]  : ";
	getline(in, t.d.dd, '-');
	getline(in, t.d.mm, '-');
	getline(in, t.d.yy);
	
	cout<<endl;
	
	return in;
}





int main()
{	
	/*DATE d;
	STUDENT ob;
	ob.display();

	DATE d1("21","01","2005");
	STUDENT ob1(101,"Omkar Kshirsagar",d);
	ob1.display();*/
	
	STUDENT ob2;
	cin>>ob2;
	ob2.display();
	
	return 0;
}
