#include <iostream>
#include <string>
using namespace std;
class LibraryItem {
protected:
    string title;
    string author;
    bool checked_out;
public:
    LibraryItem(string title, string author) : title(title), author(author), checked_out(false) {}
    virtual void display() = 0;
    bool isCheckedOut() {
        return checked_out;
    }
    void checkOut() {
        checked_out = true;
    }
    void returnItem() {
        checked_out = false;
    }
};
class Book : public LibraryItem {
private:
    int num_pages;
public:
    Book(string title, string author, int num_pages) : LibraryItem(title, author), num_pages(num_pages) {}
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Number of Pages: " << num_pages << endl;
        cout << "Checked Out: " << (checked_out ? "Yes" : "No") << endl;
    }
};
class Journal : public LibraryItem {
private:
    int issue_number;
public:
    Journal(string title, string author, int issue_number) : LibraryItem(title, author), issue_number(issue_number) {}
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Issue Number: " << issue_number << endl;
        cout << "Checked Out: " << (checked_out ? "Yes" : "No") << endl;
    }
};
int main() {
    Book book("Atomic Habbit", "Donald Trump", 200);
    Journal journal("The war", "vladimir putin", 100);
    cout << "Book Information:" << endl;
    book.display();
    cout << endl;
    cout << "Journal Information:" << endl;
    journal.display();
    cout << endl;
    book.checkOut();
    cout << "Book Checked Out: " << book.isCheckedOut() << endl;
    return 0;
}

