#include "items.h"
#include <iostream>
using namespace std;

ItemToPurchase::ItemToPurchase(){
    ItemName = "none";
    ItemPrice = 0.0;
    ItemQuant = 0;
    Description = "none";
}

ItemToPurchase::ItemToPurchase(string name, string description, double price, int quantity){
    ItemName = name;
    Description = description;
    ItemPrice = price;
    ItemQuant = quantity;
}

void ItemToPurchase::setDescription(string description)
{
    Description = description;
}

void ItemToPurchase::setName(string name)
{
    ItemName = name;
}

void ItemToPurchase::setPrice(double price)
{
    ItemPrice = price;
}
void ItemToPurchase::setQuantity(int quantity)
{
    ItemQuant = quantity;
}

string ItemToPurchase::name()
{
    return ItemName;
}

double ItemToPurchase::price()
{
    return ItemPrice;
}

int ItemToPurchase::quantity()
{
    return ItemQuant;
}

string ItemToPurchase::description()
{
    return Description;
}

void ItemToPurchase::printItemCost()
{
    cout << ItemName << " " << ItemQuant << " - $" << quantity()* price() <<endl;
}

void ItemToPurchase::printItemDescription()
{
    cout << ItemName << " | " << Description <<endl;
}