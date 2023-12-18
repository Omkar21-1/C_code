#include<stdio.h>

struct Books_info 
{
	char ISBN[16];
	char name[16];
	char author[32];
	char addition;
	float price;
};

typedef struct Books_info book;

void accept_books_information(book*,int);
void display_books_information(book*,int);


int main()
{
	book bk_info[10];
	int n;
	printf("How Many Books You Want to Add : ");
	scanf("%d",&n);
	getchar();
	
	accept_books_information(bk_info,n);
	
	printf("           ISBN code                  NAME                AUTHER     addition    PRICE    \n");
	printf("-------------------------------------------------------------------------------------------\n");
	

	display_books_information(bk_info,n);

	return 0;
}

void accept_books_information(book* target,int n)
{	
	printf("\n");
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter ISBN code : ");
		gets(target[i].ISBN);
		printf("Enter BOOK NAME : ");
		gets(target[i].name);
		printf("Enter AUTHER name : ");
		gets(target[i].author);
		printf("Enter WHICH ADDITION of book is this : ");
		scanf("%d",&target[i].addition);
		printf("Enter PRICE of the book : ");
		scanf("%f",&target[i].price);
		getchar();
		printf("\n");
	}
	printf("\n");
}
void display_books_information(book *source,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%20s  %20s  %20s  %8d  %10.2f\n",source[i].ISBN,source[i].name,source[i].author,source[i].addition,source[i].price);
	}
	printf("\n");
}
