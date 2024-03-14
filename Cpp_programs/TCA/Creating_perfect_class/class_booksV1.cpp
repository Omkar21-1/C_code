#include<iostream>
using namespace std;


class BOOK
{
	private:
		string title;							//The Title of The Book
		string author;							//The Name of The Author or Authors of The Book
		short publication_year;						//The Year The Book Was Published
		long int ISBN;							//(International Standard Book Number) A unique identifier for the book.
		string grane;							//Books elongs to (e.g., Fiction,Non-Fiction, Mystery, Sci-fi)
		bool availibility;						//A flag or Status Indicatinge Wether The Book is Availabe or Chacked Out
	public:
		void accept_book_detials()
		{	
			cin.get();										//To Clear The Buffer From Keyboard
			cout<<"Enter The Title of The Book : ";
			getline(cin,title);
			cout<<"Enter The Name of The Auther or Authors of The Book : ";
			getline(cin,author);
			
			char count = 0;										//To Check How Many Times User Entered The Invalid Year //Give 3 Try To User 
		retry:	cout<<"Enter The Year The Book Was Published : ";
			cin>>publication_year;
			if(publication_year<1000 || publication_year>2024)					//Check If The Year Is Valid Or Not
			{
				++count;									//Count Will +1 Every Time User Enter Invalid Year
				cout<<"Entered Date is Not Valid !!!"<<endl;					
				if(count == 3) exit(0);								//If User Had Tried For More Than 3 Times Then Code Will Terminate
				else goto retry;								//Give Anoter Chance For User
			}

			cout<<"Enter The ISBN(International Standard Book Number) : ";
			cin>>ISBN;
			cin.get();										//To Clear The Buffer From Keyboard
			cout<<"Enter The Grane of The Book : ";
			getline(cin,grane);
			cout<<"Availibility -> a Flag or Status Indicating Wether The Book is Available or Chacked Out (1->available/0->not available) : ";
			cin>>availibility;
			cout<<endl;
		}
		void display_book_detials()
		{
			cout<<title<<" "<<author<<" "<<publication_year<<" "<<ISBN<<" "<<grane<<" "<<availibility<<endl;
		}
		
};


int main()
{
	int insert;
	cout<<"Enter How Many Many Books Detials You Want To Insert : ";
	cin>>insert;
	cout<<endl;
	
	BOOK b[insert];

	// Accepting Books Detials 
	for(int i=0; i<insert; ++i)
	{
		b[i].accept_book_detials();
	}
	// Displaying Books Detials 
	for(int i=0; i<insert; ++i)
	{
		b[i].display_book_detials();
	}
	
	return 0;
}
