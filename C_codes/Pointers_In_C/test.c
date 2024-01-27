#include<stdio.h>
#include<stdlib.h>
void disp(int*);
void show(int**);

int main()
{
	int *p;
	int i=10;
	
	p=(int *) malloc(40*sizeof(int));
	
	printf("%d\n",sizeof(p));
	
	int a[2];
	printf("%d\n",sizeof(a));
	
	char c[20];
	printf("%d\n",sizeof(c));
	
	printf("%d\n",sizeof(i));
	return 0;
}
