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
	
	const char *sql = "DELETE FROM student WHERE rno= $1";
	const char *paramValues[1] = {"5"};
		
	PGresult *res = PQexecParams(conn, sql, 1, NULL, paramValues, NULL, NULL, 0);
	if(PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		cerr<<"Query Execution Failded : "<<PQerrorMessage(conn)<<endl;
		PQclear(res);
		PQfinish(conn);
		return 1;
	}
	
	
	cout<<"Data Deleted Succesfully !!"<<endl;


	PQclear(res);
	PQfinish(conn);
	return 0;
}
