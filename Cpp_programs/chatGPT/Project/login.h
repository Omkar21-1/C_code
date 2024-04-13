#ifndef LOGIN_H
#define LOGIN_H

#include <string>

class Login {
private:
    std::string userName;
    std::string password;

public:
    Login(const std::string &userName = "NA", const std::string &password = "NA");
    void setUserName(const std::string &userName);
    void setPassword(const std::string &password);
    std::string getUserName() const;
    std::string getPassword() const;
    bool loginUser() const;
};

#endif // LOGIN_H
