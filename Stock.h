#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>
using namespace std;

class Stock {

    public:
            void StockInfo(newString symbol, double OpeningPrice, double ClosingPrice, double Max, double Min, double preClosing, int shares);

            newString getsymbol();

            double PercentageDifference();
            double getOpeningPrice();
            double getClosingPrice();
            double MaxPrice();
            double MinPrice();
            double previousPrice();

            int NoShares();


            TypeOfStock();
            TypeOfStock(newString symbol, double OpeningPrice, double ClosingPrice, double Max, double Min, double preClosing, int shares);

    private:
            newString stockSymbol;
            double TodayOpeningPrice;
            double TodayClosingPrice;
            double TodayMax;
            double TodayMin;
            double YesterdayClosing;
            double getPercentDifference;

            int NoOfShares;
}
#endif;
