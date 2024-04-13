#ifndef REGISTER_H
#define REGISTER_H

#include <string>

class Register {
private:
    std::string userName;
    std::string password;

public:
    Register(const std::string &userName = "NA", const std::string &password = "NA");
    void setUserName(const std::string &userName);
    void setPassword(const std::string &password);
    std::string getUserName() const;
    std::string getPassword() const;
    void registerUser() const;
};

#endif // REGISTER_H
