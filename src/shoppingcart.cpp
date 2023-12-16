#include "shoppingcart.h"
#include "items.h"
#include <string>
#include <iostream>
using namespace std;

ShoppingCart::ShoppingCart()
{
    _customerName = "none";
    _currentDate = "December 15, 2023";
}

ShoppingCart::ShoppingCart(string custName, string currDate)
{
    _customerName = custName;
    _currentDate = currDate;
}

string ShoppingCart::customerName()
{
    return _customerName;
}

string ShoppingCart::date()
{
    return _currentDate;
}

void ShoppingCart::addItem(items item)
{
    _cartItems.push_back(item);
}

void ShoppingCart::removeItem(string name)
{
    bool found = false;
    for ( unsigned long int i = 0; i < _cartItems.size(); i++)
    {
        items item = _cartItems.at(i);
        if ( name == item.name())
        {
            _cartItems.erase(_cartItems.begin()+1);
            found = true;
        }
    }
    if (!found)
    {
        cout << "Item not found in cart." << endl;
    }
}

void ShoppingCart::modifyItem(items ip)
{
    bool found = false;
    for ( unsigned long int i = 0; i < _cartItems.size(); i++)
    {
        items item = _cartItems.at(i);
        if ( ip.name() == item.name())
        {
            if (ip.quantity() != 0)
            {
                item.setQuantity(ip.quantity());
            }
            if (ip.price() != 0.0)
            {
                item.setPrice(ip.price());
            }
            if (ip.description() != "none")
            {
                item.setDescription(ip.description());
            }
            _cartItems.at(i) = item;
            found = true;
        }
        
    }
    if (!found)
    {
        cout << "Item not found in cart." << endl;
    }
}
int ShoppingCart::numItemsInCart()
{
    int q = 0;
     for ( unsigned long int i = 0; i < _cartItems.size(); i++)
     {
        q += _cartItems.at(i).quantity();
     }

     return q;
}

double ShoppingCart::cost