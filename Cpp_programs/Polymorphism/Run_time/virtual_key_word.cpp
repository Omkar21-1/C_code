#include<iostream>
using namespace std;


class BASE
{
	protected:
		int a;
	public:
		BASE(int a=0) : a(a) {}
		BASE(BASE &t) : a(t.a) {}
		
		virtual void display()
		{
			cout<<"Im in Base Class Display() : "<<endl;
		}
			
		~BASE(){}	
};


class DERIEVED :public BASE
{
	protected:
		int b;
	public:
		DERIEVED(int a=0, int b=0) : BASE(a), b(b) {}
		DERIEVED(DERIEVED &t) : BASE(t.a), b(t.b) {}
		
		void display()
		{
			BASE::display();
			cout<<"Im in DERIEVED Class Display() : "<<endl;
		}
			
		~DERIEVED(){}	
};

int main()
{
	
	//DERIEVED ob1(11,22);
	
	/* Here Datatype of pointer obj is BASE but Pointing to the DERIEVED class 
	   RUNTIME POLYMORPHISAM
	   LATE BINGING
	*/	
	BASE *p = new DERIEVED(); 
	p->display();
	
	
	//ob1.display();

	return 0;
}
