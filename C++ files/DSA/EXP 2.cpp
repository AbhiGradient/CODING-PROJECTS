#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookID;
    string title;
    string author;
    string availabilityStatus;
    Book* next;
};

Book* head = nullptr;

void addBook()
{
    Book* newBook = new Book;

    cout << "\nEnter Book ID: ";
    cin >> newBook->bookID;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, newBook->title);

    cout << "Enter Author: ";
    getline(cin, newBook->author);

    cout << "Enter Availability Status (Available/Issued): ";
    getline(cin, newBook->availabilityStatus);

    newBook->next = nullptr;

    if (head == nullptr)
    {
        head = newBook;
    }
    else
    {
        Book* temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newBook;
    }

    cout << "\nBook added successfully.\n";
}

void displayBooks()
{
    if (head == nullptr)
    {
        cout << "\nLibrary catalog is empty.\n";
        return;
    }

    cout << "\n---------------- Library Catalog ----------------\n";
    cout << "ID\tTitle\t\tAuthor\t\tStatus\n";
    cout << "--------------------------------------------------\n";

    Book* temp = head;

    while (temp != nullptr)
    {
        cout << temp->bookID << "\t"
             << temp->title << "\t\t"
             << temp->author << "\t\t"
             << temp->availabilityStatus << endl;

        temp = temp->next;
    }
}

void removeBook(int bookID)
{
    if (head == nullptr)
    {
        cout << "\nLibrary catalog is empty.\n";
        return;
    }

    if (head->bookID == bookID)
    {
        Book* temp = head;
        head = head->next;

        delete temp;

        cout << "\nBook removed successfully.\n";
        return;
    }

    Book* current = head;

    while (current->next != nullptr &&
           current->next->bookID != bookID)
    {
        current = current->next;
    }

    if (current->next == nullptr)
    {
        cout << "\nBook ID not found.\n";
        return;
    }

    Book* temp = current->next;
    current->next = temp->next;

    delete temp;

    cout << "\nBook removed successfully.\n";
}

void searchBook(string keyword)
{
    if (head == nullptr)
    {
        cout << "\nLibrary catalog is empty.\n";
        return;
    }

    Book* temp = head;
    bool found = false;

    while (temp != nullptr)
    {
        if (temp->title.find(keyword) != string::npos ||
            temp->author.find(keyword) != string::npos)
        {
            cout << "\nBook Found";
            cout << "\nBook ID: " << temp->bookID;
            cout << "\nTitle: " << temp->title;
            cout << "\nAuthor: " << temp->author;
            cout << "\nAvailability: "
                 << temp->availabilityStatus << endl;

            found = true;
        }

        temp = temp->next;
    }

    if (!found)
    {
        cout << "\nNo matching book found.\n";
    }
}

void updateBook(int bookID)
{
    Book* temp = head;

    while (temp != nullptr && temp->bookID != bookID)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "\nBook ID not found.\n";
        return;
    }

    cout << "\nCurrent Details:";
    cout << "\nTitle: " << temp->title;
    cout << "\nAuthor: " << temp->author;
    cout << "\nAvailability: "
         << temp->availabilityStatus << endl;

    cin.ignore();

    cout << "\nEnter new Availability Status (Available/Issued): ";
    getline(cin, temp->availabilityStatus);

    cout << "\nBook details updated successfully.\n";
}

void sortBooksByID()
{
    if (head == nullptr || head->next == nullptr)
    {
        cout << "\nNot enough books to sort.\n";
        return;
    }

    for (Book* i = head; i != nullptr; i = i->next)
    {
        for (Book* j = head; j->next != nullptr; j = j->next)
        {
            if (j->bookID > j->next->bookID)
            {
                swap(j->bookID, j->next->bookID);
                swap(j->title, j->next->title);
                swap(j->author, j->next->author);
                swap(j->availabilityStatus,
                     j->next->availabilityStatus);
            }
        }
    }

    cout << "\nBooks sorted by Book ID.\n";
    displayBooks();
}

void sortBooksByTitle()
{
    if (head == nullptr || head->next == nullptr)
    {
        cout << "\nNot enough books to sort.\n";
        return;
    }

    for (Book* i = head; i != nullptr; i = i->next)
    {
        for (Book* j = head; j->next != nullptr; j = j->next)
        {
            if (j->title > j->next->title)
            {
                swap(j->bookID, j->next->bookID);
                swap(j->title, j->next->title);
                swap(j->author, j->next->author);
                swap(j->availabilityStatus,
                     j->next->availabilityStatus);
            }
        }
    }

    cout << "\nBooks sorted by Title.\n";
    displayBooks();
}

int main()
{
    int choice, bookID;
    string keyword;

    do
    {
        cout << "\n\n========== LIBRARY BOOK MANAGEMENT ==========";
        cout << "\n1. Add Book";
        cout << "\n2. Remove Book";
        cout << "\n3. Search Book by Title/Author";
        cout << "\n4. Update Book Availability";
        cout << "\n5. Display All Books";
        cout << "\n6. Sort Books by Book ID";
        cout << "\n7. Sort Books by Title";
        cout << "\n8. Exit";
        cout << "\nEnter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                cout << "\nEnter Book ID to remove: ";
                cin >> bookID;
                removeBook(bookID);
                break;

            case 3:
                cin.ignore();

                cout << "\nEnter Title or Author keyword: ";
                getline(cin, keyword);

                searchBook(keyword);
                break;

            case 4:
                cout << "\nEnter Book ID to update: ";
                cin >> bookID;
                updateBook(bookID);
                break;

            case 5:
                displayBooks();
                break;

            case 6:
                sortBooksByID();
                break;

            case 7:
                sortBooksByTitle();
                break;

            case 8:
                cout << "\nProgram terminated.\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 8);

    return 0;
}
