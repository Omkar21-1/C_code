#include<iostream>
using namespace std;


class ABC
{
	private:
		int a;
	public:
		ABC(int a) : a(a) {}
		
		friend int main();													
};

int main()
{
	ABC ob(10);
	
	cout<<ob.a<<endl;

	return 0;
}
