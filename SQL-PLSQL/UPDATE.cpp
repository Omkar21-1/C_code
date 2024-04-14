#include<iostream>
#include<postgresql/libpq-fe.h>
using namespace std;


int main()
{
	PGconn *conn = PQconnectdb("dbname=mydb user=postgres password='omkar@9826'");
	if(PQstatus(conn) == CONNECTION_BAD)
	{
		cerr<<"Connection Failed : "<<PQerrorMessage(conn)<<endl;
		PQfinish(conn);
		return 1;
	}
	
	const char *sql = "UPDATE student SET per = $1 WHERE rno = $2";
	const char *paramValues[2] = {"100","1"};
		
	PGresult *res = PQexecParams(conn, sql, 2, NULL, paramValues, NULL, NULL, 0);
	if(PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		cerr<<"Query Execution Failded : "<<PQerrorMessage(conn)<<endl;
		PQclear(res);
		PQfinish(conn);
		return 1;
	}
	
	
	cout<<"Data Updated Succesfully !!"<<endl;


	PQclear(res);
	PQfinish(conn);
	return 0;
}



































