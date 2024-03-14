/*
			Here Im overloading ">>" && "<<" Operator in inheritance 
*/

#include<iostream>
using namespace std;

class BASE
{
	private:
		string name;
	public:
		BASE(string name="NA") : name(name) {}
		BASE(BASE &tb) : name(tb.name) {}
		
		void set_name(string name)
		{
			this->name = name;
		}
		string get_name()
		{
			return (this->name);
		}
		~BASE() {}	
};

class DERIEVED : public BASE
{	
	private:
		float fees;
	public:
		DERIEVED(string name = "NA",float fees=0.00) : BASE(name) ,fees(fees) {}
		DERIEVED(DERIEVED &td) : fees(td.fees) 
		{
			set_name(td.get_name());		
		}
		
		friend istream& operator>>(istream&,DERIEVED&);
		friend ostream& operator<<(ostream&,DERIEVED&);
		~DERIEVED() {}
};

istream& operator>>(istream &in, DERIEVED &tob)
{
	string name;
	cout<<"Enter Name : ";
	getline(in,name);
	tob.set_name(name);
	
	cout<<"Enter Fees : ";
	in>>tob.fees;
	
	cout<<endl;
	return in;
}

ostream& operator<<(ostream &out ,DERIEVED &tob)
{
	out<<"Name : "<< tob.get_name() << endl;;
	out<<"Fees : "<< tob.fees << endl;
	return out;
}

int main()
{
	DERIEVED ob1;
	cin>>ob1;
	cout<<ob1;
	
	DERIEVED ob2(ob1);
	cout<<ob2;
	
	return 0;
}
