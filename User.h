#ifndef USER_H
#define USER_H
#include <string>

class User {
private:
    std::string name;
    int userId;

public:
    User(int userId, std::string name);
    std::string getName() const;
    int getUserId() const;
    void displayUser() const;
};

#endif