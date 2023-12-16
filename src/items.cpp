#include "items.h"
#include <iostream>
using namespace std;

items::items(){
    ItemName = "none";
    ItemPrice = 0.0;
    ItemQuant = 0;
    Description = "none";
}

items::items(string name, string description, double price, int quantity){
    ItemName = name;
    Description = description;
    ItemPrice = price;
    ItemQuant = quantity;
}

void items::setDescription(string description)
{
    Description = description;
}

void items::setName(string name)
{
    ItemName = name;
}

void items::setPrice(double price)
{
    ItemPrice = price;
}
void items::setQuantity(int quantity)
{
    ItemQuant = quantity;
}

string items::name()
{
    return ItemName;
}

double items::price()
{
    return ItemPrice;
}

int items::quantity()
{
    return ItemQuant;
}

string items::description()
{
    return Description;
}

void items::printItemCost()
{
    cout << name << " " << quantity << " - $" << quantity()* price() <<endl;
}

void items::printItemDescription()
{
    cout << ItemName << " | " << Description <<endl;
}