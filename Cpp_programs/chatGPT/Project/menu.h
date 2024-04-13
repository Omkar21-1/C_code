#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>

class MenuItem {
private:
    int id;
    std::string name;
    double price;

public:
    MenuItem(int id = 0, const std::string &name = "NA", double price = 0.0);
    void display() const;
    int getId() const;
    double getPrice() const;
};

class Menu {
private:
    std::vector<MenuItem> items;

public:
    Menu();
    void loadFromFile(const std::string &filePath);
    void display() const;
    MenuItem getItemById(int id) const;
};

#endif // MENU_H
