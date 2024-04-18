--DATABASE NAME : \c restaurant_management_system;


--1. User Table

--    Attributes:
--        Users ID (Primary Key)
--        Username
--        Password
       
CREATE SEQUENCE user_id_start START 101;      
        
CREATE TABLE Users (
		user_id int primary key DEFAULT nextval ('user_id_start'),
		username varchar (20) NOT NULL UNIQUE,
		password varchar (20) NOT NULL check(LENGTH(password)>=8)
);    
   
insert into Users (username,password) values ('omkar_kshirsagar','omkar123');
insert into Users (username,password) values ('vaibhav_kshirsagar','vaibhav123');
insert into Users (username,password) values ('rahul_borade','rahul123');
insert into Users (username,password) values ('rohan_borade','rohan123');

SELECT * FROM Users;  


--DROP TABLE Users;
--DROP SEQUENCE user_id_start;


--====================================================================================================================================   


   
--2. Order Table

--    Attributes:
--        Orders ID (Primary Key)
--        User ID (Foreign Key referencing User Table)
--        Date
        
CREATE SEQUENCE Orders_id_start START 1;

CREATE TABLE Orders(
		order_id int primary key DEFAULT nextval ('Orders_id_start'),
		user_id int NOT NULL REFERENCES Users(user_id) ON UPDATE CASCADE ON DELETE CASCADE,
		order_date DATE NOT NULL DEFAULT CURRENT_DATE
);

INSERT INTO Orders (user_id,order_date) values(101,'1969-06-09');
INSERT INTO Orders (user_id) values(102);
INSERT INTO Orders (user_id) values(103);
INSERT INTO Orders (user_id) values(104);
 
SELECT * from Orders;         
        
--DROP TABLE Orders;

        
        
--====================================================================================================================================        
        
        
        
        
--3. Restaurant Table

--    Attributes:
--        Restaurant ID (Primary Key)
--        Name
--        Address

CREATE SEQUENCE restaurant_id_start START 201; 

CREATE TABLE Restaurant(
			restaurant_id int primary key DEFAULT nextval ('restaurant_id_start'),
			name varchar(20) NOT NULL,
			address varchar(50) NOT NULL	
);

INSERT INTO Restaurant (name,address) values('Ashoka','Pimple Gurav,Pune');
INSERT INTO Restaurant (name,address) values('Veg Maratha','Pimple Gurav,Near Kalpataru, Pune');
INSERT INTO Restaurant (name,address) values('Sairat Biryani','Pimple Gurav, Krushna Chowk, Pune');

SELECT * FROM Restaurant;



--DROP TABLE Restaurant;
--DROP SEQUENCE restaurant_id_start;

--=======================================================================================================================


--4. Menu Table

--    Attributes:
--        Menu ID (Primary Key)
--        Restaurant ID (Foreign Key referencing Restaurant Table)
--        Name
--        Price


CREATE SEQUENCE menu_id_start START 701;

CREATE TABLE Menus(
		menu_id int primary key DEFAULT nextval ('menu_id_start'),
		restaurant_id int NOT NULL REFERENCES Restaurant(restaurant_id) ON UPDATE CASCADE ON DELETE CASCADE,
		name varchar(20) NOT NULL,
		price NUMERIC(10,2)
);




INSERT INTO Menus (restaurant_id,name,price) VALUES (201,'Paneer Tikka',200.00);
INSERT INTO Menus (restaurant_id,name,price) VALUES (201,'Butter Chicken',300.00);
INSERT INTO Menus (restaurant_id,name,price) VALUES (201,'Naan',50.00);

INSERT INTO Menus (restaurant_id,name,price) VALUES (202,'Veg Biryani',150.00);
INSERT INTO Menus (restaurant_id,name,price) VALUES (202,'Vegetable Pulao',120.00);
INSERT INTO Menus (restaurant_id,name,price) VALUES (202,'Veg Thali',180);

INSERT INTO Menus (restaurant_id,name,price) VALUES (203,'Chicken Biryani',250.00);
INSERT INTO Menus (restaurant_id,name,price) VALUES (203,'Mutton Biryani',300.00);
INSERT INTO Menus (restaurant_id,name,price) VALUES (203,'Egg Biryani',180.00);


SELECT * FROM Menus;




--DROP TABLE Menus;
--DROP SEQUENCE menu_id_start;
--=======================================================================================================================


--5. Order Items Table

--    Attributes:
--        Order Item ID (Primary Key)
--        Order ID (Foreign Key referencing Order Table)
--        Menu ID (Foreign Key referencing Menu Table)
--        Quantity


CREATE TABLE Order_Items(
		order_items_id SERIAL primary key,
		order_id int NOT NULL REFERENCES Orders(order_id) ON UPDATE CASCADE ON DELETE CASCADE,
		menu_id int NOT NULL REFERENCES Menus(menu_id) ON UPDATE CASCADE ON DELETE CASCADE,
		quantity int NOT NULL check (quantity>0)
);

INSERT INTO Order_Items (order_id,menu_id,quantity) VALUES (1,701,1);
INSERT INTO Order_Items (order_id,menu_id,quantity) VALUES (1,703,2);
INSERT INTO Order_Items (order_id,menu_id,quantity) VALUES (2,706,1);
INSERT INTO Order_Items (order_id,menu_id,quantity) VALUES (3,707,1);
INSERT INTO Order_Items (order_id,menu_id,quantity) VALUES (4,708,1);

SELECT * FROM Order_Items;


--DROP TABLE Order_Items;

--=======================================================================================================================










SELECT * 
FROM Users, Orders, Restaurant, Menus, Order_Items
WHERE 
	Users.user_id = Orders.user_id AND
	Restaurant.restaurant_id = Menus.restaurant_id AND
	Orders.order_id = Order_Items.order_id AND
	Menus.menu_id = Order_Items.menu_id
;











