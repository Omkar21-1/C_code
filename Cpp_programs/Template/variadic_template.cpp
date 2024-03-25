/*
			Variadic Template Function (print):
*/


#include<iostream>
using namespace std;

/*Normal*/
template <class t1, class t2>
void println(const t1 a, const t2 b)
{
	cout<<a<<" "<<b<<endl;
}





void print()
{
	cout<<endl;				//Jeva print la kahich nahi pathvla teva newline print honar
}
template <class t1, class ...Args>
void print(t1 first, Args ...om)
{
	cout<<first<<" ";			//Phila je ahe te print honar mg "space" mg parat recursive call honar
	print(om...);				//Atta args(om) container madhe (suppose 5 hote tyatla ek first ni ghetla anhi 4 args(om) ni)
						//atta args(om) madhe 4 ahet fn call honar (je varti janar) mg tyatle 1 first ghenar bakiche 3 args(om) madhe
						//asach chalu rahanar jo paraynt args(om) empty ny hot to paraynt
}





int main()
{

	println("Omkar",1111);// output: [omkar 1111]
	println("1111","omkar");// output: [1111 omkar]
	
	/*varidic Ardumint lit */
	print(1,2,3,4,5); 					// 1 2 3 4 5
	print("BirthDate","of","Omkar",21,1,2005); 		//BirthDate of Omkar 21 1 2005 

	
	
	return 0;
}
