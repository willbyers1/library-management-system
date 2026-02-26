#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include "User.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    void addBook(const Book& book);
    void addUser(const User& user);
    void borrowBook(int bookId, int userId);
    void returnBook(int bookId);
    void displayAllBooks() const;
};

#endif