// Program to create the inventory management system:
// Steps:
// Step 1: Create a structure to store product details.
// Step 2: Take product ID, product name, quantity and price as input.
// Step 3: Calculate the total value of the inventory item.
// Step 4: Display the complete inventory details.
// Step 5: Exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

struct Product
{
    int productID;
    string productName;
    int quantity;
    float price;
    float totalValue;
};

int main()
{
    Product p;

    cout << "Enter Product ID: ";
    cin >> p.productID;

    cout << "Enter Product Name: ";
    cin >> p.productName;

    cout << "Enter Quantity: ";
    cin >> p.quantity;

    cout << "Enter Price per Unit: ";
    cin >> p.price;

    p.totalValue = p.quantity * p.price;

    cout << "\n----- Inventory Details -----\n";
    cout << "Product ID     : " << p.productID << endl;
    cout << "Product Name   : " << p.productName << endl;
    cout << "Quantity       : " << p.quantity << endl;
    cout << "Price per Unit : " << p.price << endl;
    cout << "Total Value    : " << p.totalValue << endl;

    return 0;
}

/*
Output:

Enter Product ID: 101
Enter Product Name: Laptop
Enter Quantity: 5
Enter Price per Unit: 45000

----- Inventory Details -----
Product ID     : 101
Product Name   : Laptop
Quantity       : 5
Price per Unit : 45000
Total Value    : 225000
*/