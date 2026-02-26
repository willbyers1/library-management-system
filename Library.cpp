#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
    std::cout << "[SYSTEM] " << book.getTitle() << " added to the library.\n";
}

void Library::addUser(const User& user) {
    users.push_back(user);
    std::cout << "[SYSTEM] User " << user.getName() << " registered to the system.\n";
}

void Library::borrowBook(int bookId, int userId) {
    for (auto& book : books) {
        if (book.getId() == bookId) {
            if (book.getStatus()) {
                book.setStatus(false);
                std::cout << ">> Success: Book borrowed.\n";
            } else {
                std::cout << ">> Failed: Sorry, this book is currently borrowed by someone else.\n";
            }
            return;
        }
    }
    std::cout << ">> Error: Book not found!\n";
}

void Library::returnBook(int bookId) {
    for (auto& book : books) {
        if (book.getId() == bookId) {
            book.setStatus(true);
            std::cout << ">> Success: Book returned.\n";
            return;
        }
    }
    std::cout << ">> Error: Book not found!\n";
}

void Library::displayAllBooks() const {
    std::cout << "\n--- Library Inventory ---\n";
    for (const auto& book : books) {
        book.displayBook();
    }
    std::cout << "-------------------------\n";
}