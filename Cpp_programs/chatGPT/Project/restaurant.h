#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

class Restaurant {
private:
    int id;
    std::string name;
    std::string location;

public:
    Restaurant(int id = 0, const std::string &name = "NA", const std::string &location = "NA");
    void display() const;
    std::string getMenuFilePath() const;
};

#endif // RESTAURANT_H
