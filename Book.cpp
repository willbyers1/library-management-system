#include "Book.h"
#include <iostream>

Book::Book(int id, std::string title, std::string author) {
    this->id = id;
    this->title = title;
    this->author = author;
    this->isAvailable = true;
}

int Book::getId() const { return id; }
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
bool Book::getStatus() const { return isAvailable; }

void Book::setStatus(bool status) { isAvailable = status; }

void Book::displayBook() const {
    std::cout << "ID: " << id << " | Title: " << title 
              << " | Author: " << author 
              << " | Status: " << (isAvailable ? "Available" : "Borrowed") << "\n";
}