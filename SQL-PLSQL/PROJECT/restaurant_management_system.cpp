#include<iostream>
#include<postgresql/libpq-fe.h>
#include<string>
using namespace std;


class ConnectDB
{
	protected:
		PGconn *conn;
		PGresult *res;
		
	public:
		ConnectDB()  
		{
			conn = PQconnectdb("dbname=restaurant_management_system user=postgres password='omkar@9826'");
			if(PQstatus(conn) == CONNECTION_BAD)
			{
				cerr<<"Failded To Connect Database : "<<PQerrorMessage(conn)<<endl;
				PQfinish(conn);
				exit(0);
			}
		}


		void setConnection(PGconn *connection) 
		{
			conn = connection;
		}
		PGconn* getConnection() const 
		{
			return conn;
		}
		void setResult(PGresult *result) 
		{
			res = result;
		}
		PGresult* getResult() const 
		{
			return res;
		}
		
		
		
		
		~ConnectDB()
		{	
			PQfinish(conn);
		}
};

class Users: public ConnectDB
{
	protected:
		string user_id;
		string username;
		string password;
		
	
	public:
		Users(int user_id=0, string username="NA", string password=""){}
		
		//setters getters
		void setUserID(string id) 
		{
			user_id = id;
		}
		string getUserID() const 
		{
			return user_id;
		}
		void setUsername(const string& name) 
		{
			username = name;
		}
		string getUsername() const 
		{
			return username;
		}
		void setPassword(const string& pass) 
		{
			password = pass;
		}
		string getPassword() const 
		{
			return password;
		}
		
				
		bool register_user()
		{
			cout<<"Enter Username : ";
			cin>>username;
			cout<<"Enter Password : ";
			cin>>password;
			const char *sql = "INSERT INTO Users (username, password) VALUES ($1, $2)";
			const char *paramValues[2] = {username.c_str(),password.c_str()};
			res = PQexecParams(conn, sql, 2, NULL, paramValues, NULL, NULL, 0);
			if(PQresultStatus(res) != PGRES_COMMAND_OK)
			{
				cerr<<"Query Cant Exexute : "<<PQerrorMessage(conn)<<endl;
				PQclear(res);
				return 1;
			}
			else 
			{	
				PQclear(res);
				return 0;
			}
		}
		bool login_user()
		{
			cout<<"Enter Username : ";
			cin>>username;
			cout<<"Enter Password : ";
			cin>>password;
			
			string buffer = "SELECT user_id FROM Users WHERE username = '";
			buffer += username + "' AND password = '" + password + "'";
			
			res = PQexec(conn, buffer.c_str() );
			
			if(PQresultStatus(res) != PGRES_TUPLES_OK)
			{
				cerr<<"Query Cant Exexute : "<<PQerrorMessage(conn)<<endl;
				PQclear(res);
				return 1;
			}
			else 
			{	
				user_id = PQgetvalue(res,0,0);
				PQclear(res);
				return 0;
			}	
		}
		
		~Users(){}
};

class Orders 
{
	protected:
		string order_id;
		string user_id;
		string order_date;
		PGconn *conn;
		PGresult *res;
	public:
		Orders(string user_id="-1",PGconn *conn = NULL ,string order_date="00") : user_id(user_id), conn(conn), order_date(order_date) {} 
 
		//setters getters
		void setOrderID(const string& id)
		{
			order_id = id;
		}
		string getOrderID()
		{
			return order_id;
		}
		void setUserID(const string& id) 
		{
			user_id = id;
		}
		string getUserID() const 
		{
			return user_id;
		}
		void setOrderDate(const string& date) 
		{
			order_date = date;
		}
		string getOrderDate() const 
		{
			return order_date;
		}		
		
		bool give_order_id_to_user()
		{
			
			const char* sql = "INSERT INTO Orders (user_id) values($1)";
			const char* paramValues[1] = {user_id.c_str()};
			res = PQexecParams(conn, sql, 1, NULL, paramValues, NULL, NULL, 0);
			if(PQresultStatus(res) != PGRES_COMMAND_OK)
			{
				cerr<<"Query Cant Exexute : "<<PQerrorMessage(conn)<<endl;
				PQclear(res);
				return 1;
			}
			else 
			{	
				PQclear(res);
				
				string buffer = "SELECT order_id FROM Orders WHERE user_id = '" + user_id + "'";
				res = PQexec(conn, buffer.c_str() );
				
				if(PQresultStatus(res) != PGRES_TUPLES_OK)
				{
					cerr<<"Query Cant Exexute : "<<PQerrorMessage(conn)<<endl;
					PQclear(res);
					return 1;
				}
				else 
				{	
					order_id = PQgetvalue(res,0,0);
					PQclear(res);
					return 0;
				}
			}
		}
		
		~Orders()
		{	
			//PQclear(res);
			//PQfinish(conn);
		}
	
};








class Restaurant 
{
	protected:
		string restaurant_id;
		string name;
		string address;
		PGconn *conn;
		PGresult *res;
	public:
		Restaurant(PGconn *conn = NULL ) : conn(conn) {}
		
		//getter setter
		void setRestaurantID(const string& id) 
		{
			restaurant_id = id;
		}
		string getRestaurantID() const 
		{
			return restaurant_id;
		}
		void setName(const string& restaurantName) 
		{
			name = restaurantName;
		}
		string getName() const 
		{
			return name;
		}
		void setAddress(const string& restaurantAddress) 
		{
			address = restaurantAddress;
		}
		string getAddress() const 
		{
			return address;
		}
		
		bool display_restaurants()
		{
			res = PQexec(conn,"SELECT * FROM Restaurant");
			if(PQresultStatus(res) != PGRES_TUPLES_OK)
			{
				cerr<<"Query Cant Exexute : "<<PQerrorMessage(conn)<<endl;
				PQclear(res);
				return 1;
			}
			int row = PQntuples(res);
			int col = PQnfields(res);

			// Displaying headers
			for (int i = 0; i < col; ++i) 
			{
				cout.width(15);
				cout << left << PQfname(res, i);
			}
			cout << endl;

			// Displaying records
			for (int i = 0; i < row; ++i) 
			{
				for (int j = 0; j < col; ++j) 
				{
					cout.width(15);
					cout << left << PQgetvalue(res, i, j);
				}
				cout << endl;
			}
			return 0;
		}
		
		void select_restaurant()
		{
			cout<<"Enter Restaurant Id : ";
			cin>>restaurant_id;
		}
		
	
		~Restaurant(){}

};


class Menus
{
	
};





int main()
{
	Users obj1;
	/*if( (obj.register_user()) )
	{
		return 1;
	}
	
	if( (obj1.login_user()) )
	{
		return 1;
	}
	
	
	Orders obj2(obj1.getUserID(),obj1.getConnection());
	if(obj2.give_order_id_to_user())
	{
		return 1;
	}*/
	
	Restaurant obj3(obj1.getConnection());
	if(obj3.display_restaurants())
	{
		return 1;
	}
	obj3.select_restaurant();
	
	
	
	
	
	
	cout<<"Done!!"<<endl;
	
	return 0;
}
