#include<iostream>
using namespace std;

/*										use of "friend" 									*/


class A{
	private:
		int i;
		float j;
	public:
		A(int i=0,float j=0) : i(i),j(j) {}
		
		
		
		//Challa karan caller pn object ahe ane parameter pn object ahe / Lefit ani right che donhi obj ahet
		
		//PN jr donhi peki ek constat kiv avriable asla tr KY?????		=> tya sathi 				"friend" use karaych
		
		A operator + (A &sob)
		{
			A tob;
			tob.i = i + sob.i;
			tob.j = j + sob.j;
			return tob;
		} 
		void disp()
		{
			cout<<"Value of I : "<<i<<endl;
			cout<<"Value of J : "<<j<<endl;
		}
		
		
		
		friend A operator + (int x, A &sob);
};




A operator + (int x, A &sob)
{
	A tob;
	tob.i = x + sob.i;
	tob.j = x + sob.j;
	return tob;
}





int main()
{
	A ob1(1,5.5);
	A ob2(10,1);
	
	A ob3 = ob1+ob2;
	ob3.disp();
	
	//Left side chi value const kiva variable aslyavr "Friend" shivay option nahi..
	
	ob3 = 7+ob2;
	ob3.disp();
	
	return 0;
}
