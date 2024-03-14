#include<iostream>
#include<stdio.h>
using namespace std;

class BANK_ACCOUNT{
	private:
		static int total_no_of_account;
		string holder_name;
		int account_number;
		float balance;
		int primary_key;
		
	public:
	
		BANK_ACCOUNT(string holder_name="", int account_number=00, float balance=0.00, int primary_key=-1) : holder_name(holder_name),account_number(account_number), balance(balance),primary_key(primary_key) {++total_no_of_account;}  
	
		BANK_ACCOUNT(BANK_ACCOUNT &t) : holder_name(t.holder_name),account_number(t.account_number), balance(t.balance),primary_key(t.primary_key) {++total_no_of_account;}
		
		
		void create_acc(string &holder_name, int &account_number, float &balance, int &primary_key)
		{
			this->holder_name = holder_name;
			this->account_number = account_number;
			this->balance = balance;
			this->primary_key = primary_key;
		}
		
		
		void display_acc_info()
		{
			cout<<"- - - - - - - - - - - - - - - - - - - - - - -"<<endl;
			cout<<"Primary_key : "<<primary_key<<endl;
			cout<<"Owner of The Account : "<<holder_name<<endl;
			cout<<"Account Number : "<<account_number<<endl;
			cout<<"Balance : "<<balance<<endl;
			cout<<"- - - - - - - - - - - - - - - - - - - - - - -"<<endl;
		}
		
		void deposit(float amount = 0)
		{
			balance += amount; 	
		}
		
		void withdraw(float amount = 0)
		{
			balance -= amount;
		}
		
		static void count_of_total_accounts()
		{
			cout<<endl<<"Total Accounts in Bank : "<<total_no_of_account<<endl;
		}
		
		
};

int BANK_ACCOUNT::total_no_of_account = 0;






void accept(string &holder_name, int &account_number, float &balance)
{
	cin.get();
	cout<<endl<<"Enter Account Holder Name : ";
	getline(cin,holder_name);
	cout<<"Enter Account Number : ";
	cin>>account_number;
	cout<<"Enter Balance : ";
	cin>>balance;
	cout<<endl;
}

void diposit_withdraw(bool &trans)
{
	cout<<endl<<"Do You Want To diposit or withdraw Amount [1/0] : ";
	cin>>trans;
	cout<<endl;
}

void transaction(BANK_ACCOUNT *b)
{
	cout<<endl<<"= = = = = == == = = = == = = = == = = = == = = == = = = == = = = == = ="<<endl;
	char check = '0';
	cout<<"Press\n1 : Deposit Cash \n2 : Withdraw Cash \n     Enter => ";
	cin>>check;
	
	int primary_key = -1;
	cout<<"Enter Primary Key : ";
	cin>>primary_key;
	
	float amount = 0;
	cout<<"Enter Amount : ";
	cin>>amount;
	
	if(check == '1')
	{
		b[primary_key].deposit(amount);
	}
	else if(check == '2') 
	{
		b[primary_key].withdraw(amount);
	}
	else
	{
		cout<<"Wrong Option!!"<<endl;
	}
	
	
	cout<<endl<<"Updated Account Information :: "<<endl;
	b[primary_key].display_acc_info();
	
	cout<<"= = = = = == == = = = == = = = == = = = == = = == = = = == = = = == = ="<<endl;
	
}


void BANK_()
{
	int no_of_acc;
	cout<<"How Many Account You Want To Create : ";
	cin>>no_of_acc;
	
	BANK_ACCOUNT *b = new BANK_ACCOUNT[no_of_acc];
	
	string holder_name;
	int account_number;
	float balance;
	
	for(int i=0; i<no_of_acc; ++i)
	{
		accept(holder_name, account_number, balance);
		b[i].create_acc(holder_name, account_number, balance,i);
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<no_of_acc; ++i)
	{
		b[i].display_acc_info();
	}
	
	
	bool trans = 1;
	
	diposit_withdraw(trans);
	
	while(trans)
	{
		transaction(b);
		
		
		diposit_withdraw(trans);
	}
	
	
	
	
	BANK_ACCOUNT::count_of_total_accounts();
	
	delete []b; 
}

int main()
{
	
	BANK_();
	
	return 0;
}
