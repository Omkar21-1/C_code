#include<iostream>
using namespace std;



class print
{

public:

void printf( int n)
{
	cout<<n<<endl;

}

void printf(int n1,int n2)
{
	cout<<n1<<" "<<n2<<endl;
}

void printf(string a)
{
	cout<<a<<endl;
}



};

int main()
{

    print *p = new print[3];



    p[0].printf(11);
    p[1].printf(11,22);
	p[2].printf("tca");


	cout<< "done!!!"<<endl;


	/*print *p = new print;
	print *q = new print;
	print *r = new print;


	p->printf(11);
	q->printf(11,22);
	r->printf("tca");


	cout<< "done!!!"<<endl;

	delete p;
	delete q;
	delete r;
*/


	delete []p;

	return 0;
}
