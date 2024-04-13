#include "menu.h"
#include <fstream>
#include <iostream>

MenuItem::MenuItem(int id, const std::string &name, double price)
    : id(id), name(name), price(price) {}

void MenuItem::display() const {
    std::cout << id << ". " << name << " - Rs. " << price << std::endl;
}

int MenuItem::getId() const {
    return id;
}

double MenuItem::getPrice() const {
    return price;
}

Menu::Menu() {}

void Menu::loadFromFile(const std::string &filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filePath << std::endl;
        return;
    }

    int id;
    std::string name;
    double price;

    while (file >> id >> name >> price) {
        items.emplace_back(id, name, price);
    }

    file.close();
}

void Menu::display() const {
    for (const auto &item : items) {
        item.display();
    }
}

MenuItem Menu::getItemById(int id) const {
    for (const auto &item : items) {
        if (item.getId() == id) {
            return item;
        }
    }
    return MenuItem();
}
