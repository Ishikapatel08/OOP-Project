#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>

using namespace std;

class Stock {
    
    //Input and Output operators 
    friend ostream& operator << (ostream&, const Stock&);
    friend istream& operator >> (istream&, Stock&);

    public:

            Stock();
            void printStockInformation();
            void showPrices();
            void calculatePercentageGain();
            void showVolume();
            double getPercentGain();

            //Overloaded operators to easily work with the data provided
            int operator > (const Stock&) const;
            int operator < (const Stock&) const;
            int operator == (const Stock&) const;
            int operator!= (const Stock&) const;


    private:
            string stockSymbol;
            double openingPrice;
            int volume;
            double closingPrice;
            double highPrice;
            double lowPrice;
            double previousPrice;
            double percentGain;


};
#endif
