#include <iostream>
#include <string>
#include "items.h"
#include "shoppingcart.h"

 //using namespace ctch1330;
using namespace std;

void printMenu()
{
	cout << "MENU" << endl;
	cout << "1.) - Add Items to Cart" << endl;
	cout << "2.) - Remove Item from Cart" << endl;
	cout << "3.) - Change Item Quantity" << endl;
	cout << "4.) - See Item Descriptions" << endl;
	cout << "5.) - View Shopping Cart" << endl;
	cout << "6.) - Quit" << endl;
	cout << endl;
	cout << "Choose an option:  " << endl;
}


int main()
{
	string customerName;
	string date;
	cout << "Enter customer's name: " << endl;
	getline(cin, customerName);
	cout << "Enter today's date:  " << endl;
	getline(cin, date);
	cout << endl;

	cout << "Customer Name: " << customerName << endl;
	cout << "Today's date: " << date << endl;
	cout <<endl;

	ShoppingCart shoppingcart(customerName, date);

	string menu;
	
	printMenu();
	cin >> menu;
	while (menu != "6")
	{
		if (menu == "1")
		{
			cout << endl;
			string itemName;
			double price;
			string itemDescription;
			int quantity;
			
			cout << "Add item to cart" <<endl;
			cout << "Enter the item name: " << endl;
			cin.ignore();
			getline(cin, itemName);
			cout << "Enter the Item description: " <<endl;
			getline(cin, itemDescription);
			cout << "Enter the item quantity: " << endl;
			cin >> quantity;

			items item(itemName, itemDescription, price, quantity);
			shoppingcart.addItem(item);
			cout << endl;
			printMenu();
		}
		
		else if (menu == "2")
		{
			cout << "Remove item from cart" <<endl;
			cout << "Enter the name of the item you want to remove: " << endl;
			string name;
			cin.ignore();
			getline(cin, name);

			shoppingcart.removeItem(name);
			cout << endl;
			printMenu();
		}
		
		else if (menu == "3")
		{
			cout << "Change the number of items" <<endl;
			cout << "Enter the name of the item you want to change: " << endl;
			string name;
			cin.ignore();
			getline(cin, name);

			int quantity;
			cout << "Enter the new quantity: " <<endl;
			cin >> quantity;
			cin.ignore();

			items item;
			item.setName(name);
			item.setQuantity(quantity);
			shoppingcart.modifyItem(item);
			cout << endl;
			printMenu();
		}
		
		else if (menu == "4")
		{
			cout << endl;
			cout << "View Shopping Cart" <<endl;
			shoppingcart.printTotal();
			cout << endl;
			printMenu();
		}
		
		else if (menu == "5")
		{
			cout << endl;
			cout << "View Item Descriptions" <<endl;
			shoppingcart.printDescriptions();
			cout << endl;
			printMenu();
		}
		else{
			cout << "Choose an option: " << endl;
		}

	cin>> menu;

	}

	return 0;
}