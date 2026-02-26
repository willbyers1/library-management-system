#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int id;
    bool isAvailable;

public:
    Book(int id, std::string title, std::string author);
    int getId() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getStatus() const;
    void setStatus(bool status);
    void displayBook() const;
};

#endif