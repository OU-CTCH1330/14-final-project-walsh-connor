#ifndef items_hpp
#define items_hpp
#include <string>
#include <iostream>
using namespace std;


class ItemToPurchase{
    private:
            string ItemName;
            double ItemPrice;
            int ItemQuant;
            string Description;

    public:
            ItemToPurchase();
            ItemToPurchase(string name, string description, double price, int quantity);
            void setName(string name);
            void setPrice(double price);
            void setQuantity(int quantity);
            void setDescription(string description);

            string name();
            double price();
            int quantity();
            string description();
            void printItemCost();
            void printItemDescription();
};
#endif
