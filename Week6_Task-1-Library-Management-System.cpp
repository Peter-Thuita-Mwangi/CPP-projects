#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
    string BookTitle;
    string Author;
    int NumberOfCopiesAvailable;


public:
    //Method to input book details
    void inputDetails(){
    cout << "Enter Book Title: ";
    getline (cin, BookTitle);

    cout << "Enter Author: ";
    getline(cin,  Author);

    cout << "Enter number of available copies: ";
    cin >> NumberOfCopiesAvailable;}

    //Method to borrow a book
    void borrowBook(int borrowedCopies) {
        if (borrowedCopies > 0 && borrowedCopies <= NumberOfCopiesAvailable){
            NumberOfCopiesAvailable = NumberOfCopiesAvailable - borrowedCopies;

            cout << "\nBorrowing successful!" << endl;}

            else {
                cout << "\nInsufficient copies available!" << endl;
            }}

            // Method to display book details
            void displayDetails() {
            cout << "\n---------BOOK DETAILS---------" <<endl;
            cout << "Book Title: " <<BookTitle <<endl;
            cout << "Author: " << Author << endl;
            cout << "Available Copies: " << NumberOfCopiesAvailable <<endl;}};

            // Main function
            int main (){

            //creating an object
            Book Novel;

            //input book details
            Novel.inputDetails();

            //Borrowing a book
            int borrowedCopies;

            cout << "\nEnter number of copies to borrow: ";
            cin >> borrowedCopies;

            Novel.borrowBook(borrowedCopies);

            //Display updated details
            Novel.displayDetails();

            return 0;}
