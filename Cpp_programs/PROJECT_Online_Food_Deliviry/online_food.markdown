=====================================================================
**Online Food Delivery System - Terminal Version**
=====================================================================

**Overview:**
---------
The **Online Food Delivery System - Terminal Version** is a simplified implementation of an online food delivery system that operates in a terminal environment. It allows users to perform basic actions such as registering, 
logging in, viewing available restaurants, placing orders, and exiting the system.

**Functionality:**
--------------
1. **Register:**
   - Allows users to register by providing a username and password.
   - The provided credentials are stored for future logins.

2. **Login:**
   - Allows registered users to log in using their username and password.
   - Validates the input credentials against the stored data.

3. **View Restaurants:**
   - Displays a list of available restaurants with their IDs, names, and locations.
   - Users can select a restaurant to view its menu.

4. **Place Order:**
   - Allows users to add items from the menu to their order.
   - Displays the order summary including selected items and total amount.
   - Prompts users for payment.

5. **Exit:**
   - Terminates the program and exits the system.

**Implementation:**
---------------
- The project is implemented in C++.
- It primarily utilizes standard input/output operations (cin/cout) for user interaction.
- Basic file handling is used to store user credentials and restaurant/menu data.

**Future Enhancements:**
---------------------
- Integration with a database for persistent data storage.
- Addition of features such as order tracking and delivery status updates.
- Implementation of user authentication and authorization mechanisms.





































































































































































**Online Food Delivery Project Documentation**

**Overview:**

This project is an implementation of a simplified online food delivery system in C++. It allows users to browse restaurants, view menus, place orders, and make payments.

**Entities:**

1. **User:**
   - Represents a user of the system.
   - **Attributes:**
     - User ID: Unique identifier for each user.
     - Username: User's username for logging in.
     - Password: User's password for authentication.

2. **Restaurant:**
   - Represents a restaurant offering food delivery services.
   - **Attributes:**
     - Restaurant ID: Unique identifier for each restaurant.
     - Name: Name of the restaurant.
     - Location: Location of the restaurant.

3. **Menu Item:**
   - Represents an item available on a restaurant's menu.
   - **Attributes:**
     - Item ID: Unique identifier for each menu item.
     - Name: Name of the menu item.
     - Price: Price of the menu item.

4. **Order:**
   - Represents an order placed by a user.
   - **Attributes:**
     - Order ID: Unique identifier for each order.
     - User ID: Identifier of the user placing the order.
     - Restaurant ID: Identifier of the restaurant from which the order is placed.
     - Total amount: Total amount of the order.

5. **Payment:**
   - Represents a payment made for an order.
   - **Attributes:**
     - Payment ID: Unique identifier for each payment.
     - Order ID: Identifier of the order for which payment is made.
     - Amount: Amount paid for the order.

**Functionality:**

- **User Management:**
  - Users can register with the system by providing a username and password.
  - Users can log in using their credentials.

- **Restaurant Management:**
  - Restaurants are listed with their names and locations.
  - Users can view the menu of each restaurant.

- **Order Placement:**
  - Users can add items from the menu to their order.
  - Users can view their order summary before placing the order.

- **Payment Processing:**
  - Users can make payments for their orders.
  - Payment status is updated upon successful transaction.

**Implementation:**

- The project is implemented in C++.
- It uses classes and inheritance to represent entities and manage functionalities.
- Data storage and retrieval are simulated using in-memory data structures such as arrays and pointers.

**Future Enhancements:**

- Integration with a database for persistent data storage.
- Addition of features such as order tracking and delivery status updates.
- Implementation of user authentication and authorization mechanisms.
