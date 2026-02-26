#include "User.h"
#include <iostream>

User::User(int userId, std::string name) {
    this->userId = userId;
    this->name = name;
}

std::string User::getName() const { return name; }
int User::getUserId() const { return userId; }

void User::displayUser() const {
    std::cout << "User ID: " << userId << " | Name: " << name << "\n";
}