#include "restaurant.h"
#include <iostream>

Restaurant::Restaurant(int id, const std::string &name, const std::string &location)
    : id(id), name(name), location(location) {}

void Restaurant::display() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Location: " << location << std::endl;
}

std::string Restaurant::getMenuFilePath() const {
    return "menu_" + std::to_string(id) + ".txt";
}
