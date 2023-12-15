#define shoppingcart_hpp
#include <string>
#include <vector>
#include <iostream>
#include "items.h"
using namespace std;

class shoppingcart
{
    private:
                vector <items> shopitems;
                string customerName;
                string date;

    public:
                shoppingcart();
                shoppingcart(string customerName);
                void add(const items& its);


};