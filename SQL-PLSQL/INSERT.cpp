#include <iostream>
#include <postgresql/libpq-fe.h>

using namespace std;

int main() {
	
	PGconn *conn = PQconnectdb("dbname=mydb user=postgres password='omkar@9826'");
	if(PQstatus(conn) == CONNECTION_BAD)
	{
		cerr<<"Failded to Connect Database : "<<PQerrorMessage(conn)<<endl;
		PQfinish(conn);
	}
	
	
	const char * sql = "INSERT INTO student VALUES ($1,$2,$3)";
	const char *paramValues[] = {"5","vaibhav K","95.88"};
	
	PGresult *res = PQexecParams(conn, sql, 3, NULL, paramValues, NULL, NULL, 0);
	
	if(PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		cerr<<"Query Cant Exexute : "<<PQerrorMessage(conn)<<endl;
		PQclear(res);
		PQfinish(conn);
		return 1;
	}
	
	cout<<"Data Inserted Succes fully !!"<<endl;
	
	PQclear(res);
	PQfinish(conn);
	
	return 0;
}
