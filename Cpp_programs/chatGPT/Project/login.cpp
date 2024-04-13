#include "login.h"
#include <fstream>
#include <iostream>

Login::Login(const std::string &userName, const std::string &password)
    : userName(userName), password(password) {}

void Login::setUserName(const std::string &userName) {
    this->userName = userName;
}

void Login::setPassword(const std::string &password) {
    this->password = password;
}

std::string Login::getUserName() const {
    return userName;
}

std::string Login::getPassword() const {
    return password;
}

bool Login::loginUser() const {
    std::ifstream inFile("registered_users.txt");
    std::string user, pass;

    while (inFile >> user >> pass) {
        if (user == userName && pass == password) {
            inFile.close();
            return true;
        }
    }

    inFile.close();
    return false;
}
