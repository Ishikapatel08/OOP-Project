#include "Stock.h"
#include <iostream>
#include <string.h>

using namespace std;


//default constructor
TypeofStock::TypeofStock(){

    stockSymbol = "***";
    TodayOpeningPrice = 0.00;
    TodayClosingPrice = 0.00;
    TodayMaxPrice = 0.00;
    TodayMinPrice = 0.00;
    YesterdayClosing = 0.00;
    NoOfShares = 0;
}


//constructor
TypeofStock::TypeofStock(newString symbol, double OpeningPrice, double ClosingPrice, double Max, double Min, double preClosing, int shares) {

   StockInfo (symbol, OpeningPrice, ClosingPrice, Max, Min, preClosing, shares);
}

//set the information for each stock
void StockInfo(newString symbol, double OpeningPrice, double ClosingPrice, double Max, double Min, double preClosing, int shares){

    stockSymbol = symbol;
    TodayOpeningPrice = OpeningPrice;
    TodayClosingPrice = ClosingPrice;
    TodayMaxPrice = Max;
    TodayMinPrice = Min;
    YesterdayClosing = preClosing;
    NoOfShares = shares;

}


newString getSymbol(){

    return stockSymbol;
}


double PercentageDifference(){

    getPercentDifference = ((TodayClosingPrice - YesterdayClosing) / YesterdayClosing) * 100;
    return getPercentDifference;
}

double getOpeningPrice(){

    return TodayOpeningPrice;

}

double getClosingPrice(){

    return TodayClosingPrice;
}

double MaxPrice(){

    return TodayMaxPrice;
}

double MinPrice(){

    return TodayMinPrice;
}

double previousPrice(){

    return YesterdayClosing;
}

int NoShares(){

    return NoOfShares;
}

/*

//Overload the relational operators.
bool stockType::operator==(const newString& rightStr) const{

    return (strcmp(sortIndicesGainLoss, rightStr.sortIndicesGainLoss) == 0);
}

bool stockType::operator<(const newString& rightStr) const{

    return (strcmp(sortIndicesGainLoss, rightStr.sortIndicesGainLoss) < 0);
}

bool stockType::operator<=(const newString& rightStr) const{

    return (strcmp(sortIndicesGainLoss, rightStr.sortIndicesGainLoss) <= 0);
}

bool stockType::operator>(const newString& rightStr) const{

    return (strcmp(sortIndicesGainLoss, rightStr.sortIndicesGainLoss) > 0);
}

bool stockType::operator>=(const newString& rightStr) const{

    return (strcmp(sortIndicesGainLoss, rightStr.sortIndicesGainLoss) >= 0);
}

bool stockType::operator!=(const newString& rightStr) const{

    return (strcmp(sortIndicesGainLoss, rightStr.sortIndicesGainLoss) != 0);
}
*/


