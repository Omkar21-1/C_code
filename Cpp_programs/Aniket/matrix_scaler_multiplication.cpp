/*
					 Create a class called Matrix to represent a 2x2 matrix. The class should have private attributes for the four elements of the matrix. 
					 Implement a constructor to initialize these elements. Define a friend function named multiplyByScalar outside the class, which takes a 
					 Matrix object and a scalar value as parameters and returns a new Matrix object representing the result of multiplying the matrix by the 
					 scalar value. Test your implementation by creating instances of Matrix, using the friend function to multiply them by scalar values, and
					 displaying the results.
*/

#include<iostream>
using namespace std;



class Matrix
{
	const int m 2
	const int n 2
	int **a;
	
	public:
		Matrix()
		{
			a = new int*[m];
			a[0] = new int[n];
			a[1] = new int[n];
			
			for(int i=0; i<m; ++i)
			{
				for(int j=0; j<n; ++j)
				{
					a[i][j] = 0;
				}
			}
		}
		Matrix(Matrix& t)
		{
			for(int i=0; i<m; ++i)
			{
				for(int j=0; j<n; ++j)
				{
					this->a[i][j] = t.a[i][j];
				}
			}
		}
		
		friend Matrix implementation(Matrix &t, int scaler);		
		
		friend istream& operator >> (istream &in, Matrix &t);
		friend ostream& operator << (ostream &out, Matrix &t);	
	
	~Matrix()
	{
		delete []a[0];
		delete []a[1];
		delete []a;
	}
};


istream& operator >> (istream &in, Matrix &t)
{
	for(int i=0; i<m; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			cout<<"Enter Data : ";
			in>>t.a[i][j];
		}
	}
	cout<<endl;
	return in;
}

ostream& operator << (ostream &out, Matrix &t)
{
	for(int i=0; i<m; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			out<<t.a[i][j]<<" ";
		}
		out<<endl;
	}
	out<<endl;
	return out;
}

Matrix implementation(Matrix &t, int scaler)
{
	Matrix temp_obj;
	
	for(int i=0; i<m; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			temp_obj.a[i][j] = t.a[i][j] * scaler;
		}
	}
	return temp_obj;
}

int main()
{
	Matrix ob1;
	cin>>ob1;
	cout<<"Matrix Elements of ob1 : "<<endl<<ob1;
	
	
	int scaler=0;
	cout<<"Enter Scaler : ";
	cin>>scaler;

	Matrix ob2 = implementation(ob1,scaler);
	cout<<endl<<"Matrix Elements of ob2 : "<<endl<<ob2;


	return 0;
}
