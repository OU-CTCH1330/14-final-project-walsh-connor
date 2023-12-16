#define ShoppingCart_hpp
#include <string>
#include <vector>
#include <iostream>
#include "items.h"
using namespace std;

class ShoppingCart
{
    private:
                vector <items> _cartItems;
                string _customerName;
                string _currentDate;

    public:
                ShoppingCart();
                ShoppingCart(string custName, string date);
                string customerName();
                string date();
                void addItem(items item);
                void removeItem(string name);
                void modifyItem(items item);
                int numItemsInCart();
                double costOfCart();
                void printTotal();
                void printDescriptions();
};