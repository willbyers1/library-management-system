# Library Management System (C++)

A simple, console-based Library Management System built with C++ using Object-Oriented Programming (OOP) principles. This project demonstrates modular programming, class interactions, and encapsulation.

## Features

- **Add Books:** Register new books into the library inventory.
- **Add Users:** Register new users to the system.
- **Borrow Books:** Allows users to borrow available books. Updates the book's status dynamically.
- **Return Books:** Users can return borrowed books, making them available in the library again.
- **Inventory Display:** View the complete list of books and their current availability status.

## File Structure

The project is divided into modular files for better readability and maintenance:

- `Book.h` & `Book.cpp`: Defines the Book class and its attributes (title, author, status).
- `User.h` & `User.cpp`: Defines the User class (name, user ID).
- `Library.h` & `Library.cpp`: Manages the core logic, including collections of books/users and borrowing mechanisms.
- `main.cpp`: The entry point of the application that simulates the library operations.

## How to Compile and Run

To run this project on your local machine, you need a C++ compiler (like GCC).

1. Clone this repository or download the source code files.
2. Open your terminal and navigate to the project directory.
3. Compile the code using the following command:
   ```bash
   g++ main.cpp Book.cpp User.cpp Library.cpp -o library_system
Run the executable:

On Linux/macOS: ./library_system

On Windows: library_system.exe

Example Output


=== WELCOME TO THE LIBRARY SYSTEM ===

[SYSTEM] C++ Programming added to the library.
[SYSTEM] Clean Code added to the library.
[SYSTEM] User Will registered to the system.

--- Library Inventory ---
ID: 101 | Title: C++ Programming | Author: Bjarne Stroustrup | Status: Available
-------------------------

[Will is borrowing the C++ Programming book...]
>> Success: Book borrowed.
