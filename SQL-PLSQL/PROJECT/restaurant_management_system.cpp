#include<iostream>
#include<postgresql/libpq-fe.h>
#include<string>
using namespace std;

//this Class is to connect database
class ConnectDB
{
	protected:
		PGconn *conn;
		PGresult *res;
		
	public:
		//connecting database
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

		//setter getter
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
		
		
		
		//after sucessfull completion of order disconnecting to database
		~ConnectDB()
		{	
			PQfinish(conn);
		}
};


//This class is for register user or login user
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
		
		//this function is for register user 
		//if user registered successfully it returns true else false		
		bool register_user()
		{
			cout<<"\n\n--- Register Page ---\n\n"<<endl;
			
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
		
		//this function is for login user
		//If user logined successfully it returns true else false
		bool login_user()
		{
			cout<<"\n\n--- Login Page ---\n\n"<<endl;
		
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


//This class generates new order id for user every time he wants to order something 
class Orders 
{
	protected:
		string order_id;
		string user_id;
		string order_date;
		PGconn *conn;
		PGresult *res;
	public:
		//Setting connection to database
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
		
		//This fuction give order id to user 
		//If there is no problem it returns true else false
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
				
				string buffer = "SELECT order_id FROM Orders ORDER BY order_id DESC";// WHERE user_id = '" + user_id + "'";
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







//This class is for displaying restaurents
//this class will have more features in future 
class Restaurant 
{
	protected:
		string restaurant_id;
		string name;
		string address;
		PGconn *conn;
		PGresult *res;
	public:
		//setting connections
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
		
		
		//this function displays restaurants if evry thing work properly it returns true else false
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
			
			cout<<"\n\n--- Restaurants Detials ---\n\n"<<endl;
			
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
		
		//this function selects the restaurant id
		void select_restaurant()
		{
			cout<<"\n\n---  ---\n\n"<<endl;
			cout<<"Enter Restaurant Id : ";
			cin>>restaurant_id;
		}
		
	
		~Restaurant(){}

};

//This class is for showing menu for selected restaurant id
//This class will have more features in future
class Menus
{
	protected:
		PGconn *conn;
		PGresult *res;
		string restaurant_id;
	public:
		//setting connections
		Menus(PGconn *conn=NULL, string restaurant_id="NA") : conn(conn),restaurant_id(restaurant_id) {}

		//displaying menu for selected restaurant id
		//if evry thing works properly it return true else false
		bool display_menu()
		{
			string sql = "SELECT * FROM Menus WHERE restaurant_id = " + restaurant_id;
			res = PQexec(conn,sql.c_str());
			if(PQresultStatus(res) != PGRES_TUPLES_OK)
			{
				cerr<<"Query Cant Exexute : "<<PQerrorMessage(conn)<<endl;
				PQclear(res);
				return 1;
			}
			int row = PQntuples(res);
			int col = PQnfields(res);

			cout<<"\n\n--- Menu ---\n\n"<<endl;
			
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
		
		~Menus(){}
};


//this class is final class to make order 
//here we add menus to our list and its quentity
//this class will have more features in future
class Order_Items
{
	protected:
		PGconn *conn;
		PGresult *res;
		string menu_id;
		string order_id;
		string quantity;
	public:
	//setting connections
	Order_Items(PGconn *conn=NULL, string order_id="", string menu_id="", string quantity="") : conn(conn), menu_id(menu_id), order_id(order_id), quantity(quantity) {}
		
		//this function places the order
		bool place_order()
		{
			string sql = "INSERT INTO Order_Items (order_id,menu_id,quantity) VALUES ($1,$2,$3)";
			cout<<"Enter Menu Id : ";
			cin>>menu_id;
			cout<<"Enter Quantity : ";
			cin>>quantity;
			
			const char *paramValues[3] = {order_id.c_str(),menu_id.c_str(),quantity.c_str()};
			res = PQexecParams(conn, sql.c_str(), 3, NULL, paramValues, NULL, NULL, 0);
			if(PQresultStatus(res) != PGRES_COMMAND_OK)
			{
				cerr<<"failded to execute query : "<<PQerrorMessage(conn)<< endl;
				PQclear(res);
				return 1;
			}
			PQclear(res);
			return 0;
		}
		
		//this function is for multipule ordering
		bool make_order()
		{	
			cout<<"\n\n--- Order Here ---\n\n"<<endl;
			
			char ord = 'Y';
			do
			{
				if( place_order() )
				{
					return 1;
				}
				cout<<"Order More ? [Y/N]: ";
				cin>>ord;
				if(ord == 'n' || ord == 'N')
				{
					break;
				}		
			}while(ord == 'Y' || ord == 'y');
			return 0;
		}
	
};



int main()
{
	Users obj1;
	/*if( (obj.register_user()) )
	{
		return 1;
	}*/
	
	if( (obj1.login_user()) )
	{
		return 1;
	}
	
	
	Orders obj2(obj1.getUserID(),obj1.getConnection());
	if(obj2.give_order_id_to_user())
	{
		return 1;
	}
	
	Restaurant obj3(obj1.getConnection());
	if(obj3.display_restaurants())
	{
		return 1;
	}
	obj3.select_restaurant();
	
	Menus ob4(obj1.getConnection(), obj3.getRestaurantID());
	if(ob4.display_menu())
	{
		return 1;
	}
	
	Order_Items obj5(obj1.getConnection(), obj2.getOrderID());
	
	if( obj5.make_order() )
	{
		return 1;
	}
	
	
	cout<<"Done!!"<<endl;
	
	return 0;
}
