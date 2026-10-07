#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std; 
 
struct Product { 
    int productId; 
    string name; 
    string manufacturer; 
    float price; 
    float rating; 
}; 
 
void displayProducts(Product p[], int n) { 
    cout << "\n"; 
    cout << left << setw(12) << "Product ID" 
         << setw(20) << "Name" 
         << setw(20) << "Manufacturer" 
         << setw(12) << "Price" 
         << setw(10) << "Rating" << endl; 
    cout << "-----------------------------------------------------------------------\n"; 
 
    for (int i = 0; i < n; i++) 
        cout << left << setw(12) << p[i].productId 
             << setw(20) << p[i].name 
             << setw(20) << p[i].manufacturer 
             << setw(12) << p[i].price 
             << setw(10) << p[i].rating << endl; 
} 
 
void bubbleSortById(Product p[], int n) { 
    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < n - i - 1; j++) 
            if (p[j].productId > p[j + 1].productId) { 
                Product temp = p[j]; 
                p[j] = p[j + 1]; 
                p[j + 1] = temp; 
            } 
} 
 
void selectionSortByPrice(Product p[], int n) { 
    for (int i = 0; i < n - 1; i++) { 
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) 
            if (p[j].price < p[minIndex].price) 
                minIndex = j; 
 
        Product temp = p[i]; 
        p[i] = p[minIndex]; 
        p[minIndex] = temp; 
    } 
} 
 
void insertionSortByRating(Product p[], int n) { 
    for (int i = 1; i < n; i++) { 
        Product key = p[i]; 
        int j = i - 1; 
        while (j >= 0 && p[j].rating < key.rating) { 
            p[j + 1] = p[j]; 
            j--; 
        } 
        p[j + 1] = key; 
    } 
} 
 
int main() { 
    int n; 
    cout << "Enter number of products: "; 
    cin >> n; 
 
    Product p[100]; 
    for (int i = 0; i < n; i++) { 
        cout << "\nEnter details of Product " << i + 1 << ":\n"; 
        cout << "Product ID: "; 
        cin >> p[i].productId; 
        cout << "Product Name: "; 
        cin >> p[i].name; 
        cout << "Manufacturer: "; 
        cin >> p[i].manufacturer; 
        cout << "Price: "; 
        cin >> p[i].price; 
        cout << "Quality Rating (0 to 5): "; 
        cin >> p[i].rating; 
    } 
 
    bubbleSortById(p, n); 
    cout << "\nProducts in Increasing Order of Product ID"; 
    displayProducts(p, n); 
 
    selectionSortByPrice(p, n); 
    cout << "\nProducts in Increasing Order of Price"; 
    displayProducts(p, n); 
 
    insertionSortByRating(p, n); 
    cout << "\nProducts in Decreasing Order of Quality Rating"; 
    displayProducts(p, n); 
 
    return 0; 
}