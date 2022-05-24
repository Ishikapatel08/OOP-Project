#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

class Stock {

    friend ostream& operator << {ostream&, const stockType&};
    friend istream& operator >> {istream&, stockType};

    public:

            Stock();
            void printStockInfo();
            void displayPrices();
            void calcPercentGain();
            void displayVolume();
            double getPercentGain();

            int operator> {const stockType&} const;
            int operator< {const stockType&} const;
            int operator== {const stockType&} const;
            int operator!= {const stockType&} const;


    private:
            string stockSymbol;
            double OpeningPrice;
            int volume;
            double ClosingPrice;
            double MaxPrice;
            double MinPrice;
            double PrevPrice;
            double PercentGain;

}
#endif;
