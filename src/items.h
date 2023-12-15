#define items_hpp
#include <string>
#include <iostream>
using namespace std;

class items
{
    private:
    
            string ItemName;
            float ItemPrice;
            int ItemQuant;

    public:

            items();

            items(string in, float ip, int iq);

            void Name(string in);
            string entername();
            void CalcPrice(float ip);
            float enterprice();
            void CalcQuant(int iq);
            int enterquant();

};
