
#include <iostream>
#include <string>
using namespace std;

// Struct to represent a book
struct Book {
    string title;
    string author;
    int year;
    string genre;
};

// Function to display a book
void displayBook(const Book& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
    cout << "Genre: " << book.genre << endl;
    cout << "----------------------" << endl;
}


void findBook(const Book books[], int size, const string& searchTerm) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (books[i].title == searchTerm || books[i].author == searchTerm) {
            displayBook(books[i]);
            found = true;
        }
    }
    if (!found)
        cout << "Book not found." << endl;
}

int main() {
    const int MAX_BOOKS = 100;
    Book library[MAX_BOOKS];
    int bookCount = 0;

    // Add some initial books to the library
    library[bookCount++] = {"The Great Gatsby", "F. Scott Fitzgerald", 1925, "Fiction"};
    library[bookCount++] = {"To Kill a Mockingbird", "Harper Lee", 1960, "Fiction"};
    library[bookCount++] = {"1984", "George Orwell", 1949, "Dystopian"};

  
    cout << "All Books in the Library:" << endl;
    for (int i = 0; i < bookCount; ++i) {
        displayBook(library[i]);
    }

 
    cout << "Search for a book by title or author: ";
    string searchTerm;
    getline(cin, searchTerm);
    findBook(library, bookCount, searchTerm);

    cout << "Enter the details of a new book:" << endl;
    cout << "Title: ";
    getline(cin, library[bookCount].title);
    cout << "Author: ";
    getline(cin, library[bookCount].author);
    cout << "Year: ";
    cin >> library[bookCount].year;
    cin.ignore(); 
    cout << "Genre: ";
    getline(cin, library[bookCount].genre);
    bookCount++;
    cout << "All Books in the Library after addition:" << endl;
    for (int i = 0; i < bookCount; ++i) {
        displayBook(library[i]);
    }

    return 0;
}
