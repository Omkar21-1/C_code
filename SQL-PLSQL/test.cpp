#include <iostream>
#include <postgresql/libpq-fe.h>

using namespace std;

int main()
{ 

    PGconn *conn = PQconnectdb("dbname=mydb user=postgres password=omkar@9826");
    // Check to see that the connection was successfully made
    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
        PQfinish(conn);
        return 1;
    }
    else 
    {
        cerr << "Connection completed : CONGRATS OMKARRRR" << endl;
    }

    // Note: It's generally not secure to hardcode passwords in source code.
    // Consider using environment variables or other secure methods for storing passwords.

    PQfinish(conn);
    return 0;
}
