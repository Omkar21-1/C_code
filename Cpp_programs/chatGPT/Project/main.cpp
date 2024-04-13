#include <iostream>
#include <fstream>
#include "restaurant.h"
#include "menu.h"

int main() {
    // Display available restaurants
    std::ifstream restaurantFile("restaurants_file.txt");
    if (!restaurantFile.is_open()) {
        std::cerr << "Error: Unable to open restaurants file." << std::endl;
        return 1;
    }

    int id;
    std::string name, location;
    while (restaurantFile >> id >> name >> location) {
        Restaurant restaurant(id, name, location);
        restaurant.display();
    }
    restaurantFile.close();

    // Select a restaurant
    int selectedRestaurantId;
    std::cout << "Enter the ID of the restaurant you want to view menu for: ";
    std::cin >> selectedRestaurantId;
    std::string menuFilePath = "menu_" + std::to_string(selectedRestaurantId) + ".txt";

    // Display menu for the selected restaurant
    Menu menu;
    menu.loadFromFile(menuFilePath);
    menu.display();

    // Order food (implementation pending)

    return 0;
}
