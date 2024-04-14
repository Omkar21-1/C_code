#include<iostream>
#include<postgresql/libpq-fe.h>
using namespace std;

int main()
{
	PGconn *conn = PQconnectdb("dbname=mydb user=postgres password='omkar@9826'");
	if(PQstatus(conn) == CONNECTION_BAD)
	{
		cerr<<"Failded To Connect Database : "<<PQerrorMessage(conn)<<endl;
		PQfinish(conn);
		return 1;
	}
	
	PGresult *res = PQexec(conn, "SELECT * FROM student");
	
	if(PQresultStatus(res) != PGRES_TUPLES_OK)
	{
		cerr<<"Query Execution Failded : "<<PQerrorMessage(conn)<<endl;
		PQclear(res);
		PQfinish(conn);
		return 1;
	}
	
	int row = PQntuples(res);
	int col = PQnfields(res);
	
	for(int i=0; i<col; ++i)
	{
		cout<<PQfname(res,i)<<"\t";
	}
	cout<<endl;
	
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cout<<PQgetvalue(res,i,j)<<"\t";
		}
		cout<<endl;
	}
	PQclear(res);
	PQfinish(conn);


	return 0;
}
