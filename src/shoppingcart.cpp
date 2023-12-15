#include "shoppingcart.h"
#include <vector>

void shoppingcart::add(const items& its)
{
    shopitems.push_back(its);
}