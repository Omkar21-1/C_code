#include "register.h"
#include <fstream>

Register::Register(const std::string &userName, const std::string &password)
    : userName(userName), password(password) {}

void Register::setUserName(const std::string &userName) {
    this->userName = userName;
}

void Register::setPassword(const std::string &password) {
    this->password = password;
}

std::string Register::getUserName() const {
    return userName;
}

std::string Register::getPassword() const {
    return password;
}

void Register::registerUser() const {
    std::ofstream outFile("registered_users.txt", std::ios::app);
    outFile << userName << " " << password << std::endl;
    outFile.close();
}
