#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MenuItem 
{
        private:
        string name;
        float price;

        public:
        MenuItem(string name, float price) : name(name), price(price) {}

        // item name
        string getName() const
        {
                return name;
        }

        // item price
        float getPrice() const
        {
                return price;
        }
};


class Menu 
{
        private:
        string restaurantName;
        MenuItem* items;
        int numItems;

        public:
        Menu(string restaurantName, MenuItem* items, int numItems) : restaurantName(restaurantName), items(items), numItems(numItems) {}

        // Display of menu
        void displayMenu()
        {
                cout << "Menu for " << restaurantName << ":" << endl;
                for (int i = 0; i < numItems; ++i)
                {
                        cout << i + 1 << ". " << items[i].getName() << " - Rs " << items[i].getPrice() << endl;
                }
        }

        // placeOrder
        MenuItem placeOrder(int choice)
        {
                if (choice >= 1 && choice <= numItems)
                {
                        cout << "You have ordered: " << items[choice - 1].getName() << endl;
                        return items[choice - 1];
                }
                else
                {
                        cout << "Invalid choice. Please select a valid menu item." << endl;
                        return MenuItem("", 0);
                }
        }

        // restaurant name
        string getRestaurantName() const
        {
                return restaurantName;
        }
};

// generate and display the bill
void generateBill(const vector<MenuItem>& orderedItems, const string& restaurantName)
{
        cout << "=====================" << endl;
        cout << "      BILL" << endl;
        cout << "=====================" << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Ordered Items:" << endl;
        float totalAmount = 0;
        for (const auto& item : orderedItems)
        {
                cout << item.getName() << " - Rs " << item.getPrice() << endl;
                totalAmount += item.getPrice();
        }
        cout << "Total Amount: Rs " << totalAmount << endl;
        cout << "PAY on \nupi ID : 9309272111@ybl"<< endl;
        cout << "=====================" << endl;
}

void rstaurantSelect()
{
	cout << "=====================" << endl;
        cout << "Select a restaurant:" << endl;
        cout << "1. Hotel Green Park" << endl;
        cout << "2. Biryani House" << endl;
        cout << "3. South Treats" << endl;
        cout << "4. Hotel On The Rocks" << endl;
        cout << "5. Siddhivinayak Snacks Centre " << endl;
        cout << "=====================" << endl;
}

int main()
{
        // menu items 
        MenuItem items1[] = 
        {
                MenuItem("Paneer Tikka", 280),
                MenuItem("Butter Chicken", 300),
                MenuItem("Naan", 50),
                MenuItem("Rice", 150)
        };
        MenuItem items2[] = 
        {
                MenuItem("Veg Biryani", 180),
                MenuItem("Chicken Biryani", 250),
                MenuItem("Chicken 65", 120),
                MenuItem("Raita", 50)
        };
        MenuItem items3[] = 
        {
                MenuItem("Masala Dosa", 130),
                MenuItem("Idli Sambhar/Medu Vada", 80),
                MenuItem("Vada Pav", 50),
                MenuItem("Tea/Coffee", 40)
        };
        MenuItem items4[] = 
        {
                MenuItem("Paneer Angara", 280),
                MenuItem("Veg Patiyala", 220),
                MenuItem("Butter Nan", 50),
                MenuItem("Jeera Rice", 130)
        };
        MenuItem items5[] = 
        {
                MenuItem("Vada Pav", 25),
                MenuItem("Samosa", 25),
                MenuItem("Mango Lassi/Malai Lassi", 60),
                MenuItem("Bisleri", 20)
        };

        // Create menus 
        Menu menu1("Hotel Green Park", items1, 4);
        Menu menu2("Biryani House", items2, 4);
        Menu menu3("South Treats", items3, 4);
        Menu menu4("Hotel On The Rocks", items4, 4);
        Menu menu5("Siddhivinayak Snacks Centre", items5, 4);

        // Display menus 
        rstaurantSelect();
        

        // choice of restaurant
        int restaurantChoice;
        cout << "Enter the number of the restaurant: ";
        cin >> restaurantChoice;

        Menu* selectedMenu;
        switch (restaurantChoice)
        {
        case 1:
                selectedMenu = &menu1;
                break;
        case 2:
                selectedMenu = &menu2;
                break;
        case 3:
                selectedMenu = &menu3;
                break;
        case 4:
                selectedMenu = &menu4;
                break;
        case 5:
                selectedMenu = &menu5;
                break;
        default:
                cout << "Invalid choice. Exiting..." << endl;
                return 1;
        }

        vector<MenuItem> orderedItems;
        
        selectedMenu->displayMenu();

        // choice menu
        char choice;
        do
        {
                int menuItemChoice;
                cout << "Enter the number of the item you want to order: ";
                cin >> menuItemChoice;

                // Place order
                MenuItem orderedItem = selectedMenu->placeOrder(menuItemChoice);
                orderedItems.push_back(orderedItem);

                cout << "Do you want to order more items? (Y/N): ";
                cin >> choice;
        }
         while (choice == 'Y' || choice == 'y');

        // Generate and display bill
        generateBill(orderedItems, selectedMenu->getRestaurantName());

        return 0;
}
