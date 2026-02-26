#include <iostream>
#include "Library.h"

int main() {
    Library myLibrary;

    std::cout << "=== WELCOME TO THE LIBRARY SYSTEM ===\n\n";

    // Add books
    myLibrary.addBook(Book(101, "C++ Programming", "Bjarne Stroustrup"));
    myLibrary.addBook(Book(102, "Clean Code", "Robert C. Martin"));
    myLibrary.addBook(Book(103, "Design Patterns", "Erich Gamma"));

    // Add users
    myLibrary.addUser(User(1, "Will"));
    myLibrary.addUser(User(2, "Deniz"));

    // Initial State
    myLibrary.displayAllBooks();

    // Will borrows a book
    std::cout << "\n[Will is borrowing the C++ Programming book...]\n";
    myLibrary.borrowBook(101, 1);

    // New State
    myLibrary.displayAllBooks();

    // Will returns the book
    std::cout << "\n[Will is returning the C++ Programming book...]\n";
    myLibrary.returnBook(101);

    // Final State
    myLibrary.displayAllBooks();

    return 0;
}