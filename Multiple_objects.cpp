#include<iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string genre;
    float price;
};

int main() {
    Book b1;
    b1.title = "1984";
    b1.author = "George Orwell";
    b1.genre = "Dystopian";
    b1.price = 499.99;

    Book b2;
    b2.title = "To Kill a Mockingbird";
    b2.author = "Harper Lee";
    b2.genre = "Classic Fiction";
    b2.price = 399.50;

    Book b3;
    b3.title = "The Alchemist";
    b3.author = "Paulo Coelho";
    b3.genre = "Adventure/Fantasy";
    b3.price = 299.75;

    cout << "Book 1:" << endl;
    cout << b1.title << endl;
    cout << b1.author << endl;
    cout << b1.genre << endl;
    cout << b1.price << endl << endl;

    cout << "Book 2:" << endl;
    cout << b2.title << endl;
    cout << b2.author << endl;
    cout << b2.genre << endl;
    cout << b2.price << endl << endl;

    cout << "Book 3:" << endl;
    cout << b3.title << endl;
    cout << b3.author << endl;
    cout << b3.genre << endl;
    cout << b3.price << endl;

    return 0;
}
