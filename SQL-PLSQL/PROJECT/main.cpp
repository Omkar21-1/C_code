#include<iostream>
#include<postgresql/libpq-fe.h>
using namespace std;

int main()
{
	PGconn *conn = PQconnectdb("dbname=restaurant_management_system user=postgres password='omkar@9826'");
	if(PQstatus(conn) == CONNECTION_BAD)
	{
		cerr<<"Failded To Connect Database : "<<PQerrorMessage(conn)<<endl;
		PQfinish(conn);
		return 1;
	}
	
	
	
	
	
	
	cout<<"Done!!"<<endl;
	PQfinish(conn);
	return 0;
}
