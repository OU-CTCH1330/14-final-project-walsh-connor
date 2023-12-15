#include "items.h"

items::items()
:ItemName("")
,ItemPrice(0)
,ItemQuant(0)
{}

items::items(string in, float ip, int iq)
:ItemName(in)
,ItemPrice(ip)
,ItemQuant(iq)
{}

void items::CalcPrice(float ip)
{
    ItemPrice = ip;
}

void items::CalcQuant(int iq)
{
    ItemQuant = iq;
}

void items::Name(std::string in)
{
    ItemName = in;
}

float items::enterprice()
{
    return ItemPrice;
}

int items::enterquant()
{
    return ItemQuant;
}

string items::entername()
{
    return ItemName;
}