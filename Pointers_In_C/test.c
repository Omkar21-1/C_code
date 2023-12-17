#include<stdio.h>

float a = 3.14;
float **z;
float **y;
float ***x;
float ****v;
float ****w;





float **fun1(float *);
float ****fun2(float ***);


int main()
{

	
	printf("&a : %lu\n",&a);
	printf("&z : %lu\n",&z);
	printf("&y : %lu\n",&y);
	printf("&x : %lu\n",&x);
	printf("&v : %lu\n",&v);
	printf("&w : %lu\n",&w);
	


	z = fun1 (&a);
	printf("%lu %f\n",z,**z);

}

float **fun1(float *z)
{
	y = &z;
	v = fun2(&y);
	return (**v);
}

float ****fun2(float ***x)
{
	w = &x;
	return(w);
}
