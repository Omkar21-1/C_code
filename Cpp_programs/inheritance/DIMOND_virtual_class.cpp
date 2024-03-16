/*
				Q.) Virtual class ky asta?
				-> Dimond Problem Hybrid inheritance
				
				[A]
				 |
			    ___________
			    |	      |
			   [B]       [C]
			   ____________
			         |
			        [D]
			        
			Samja [A] madhe "i" ahe tr 
			Tyachi copy [B] madhe ani [C] madhe bannar
			Mg jeva tyancha child bannar jo [D] ahe
			Tyat "i" chya "2" copy bannar 
			Je allow nahi ahe
				
				
				
			Tya problem ch solution Virtual class ahe nahi tr tyachya kahi dusra nahi ahe
			
			class B ani C la VIRTUAL karaych
			
				[A]
				 |
			    _____^_____
			    |	 |     |
			   [B]   |    [C]
			    |____|_____|
			         |
			        [D]
			        
*/
#include<iostream>
using namespace std;

class A
{
	public:
	int i;
};
class B : virtual public A
{
	public:
	int j;
};
class C : virtual public A
{
	public:
	int k;
};

class D : public B, public C
{
	public:
	int l;
};



int main()
{
	A ob1;
	B ob2;
	C ob3;
	D ob4;
	
	int a = ob4.i;

	return 0;
}


















