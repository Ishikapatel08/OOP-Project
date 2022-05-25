#include "Stock.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//WE INCLUDE INFORMATION ABOUT DAY TO DAY TRANSACTION, GENERAL ACCOUNT INFORMATION


ostream& operator << (ostream& os, const Stock& st) {

    os << st.stockSymbol << " "
    << st.openingPrice << " "
    << st.closingPrice << " "
    << st.highPrice << " "
    << st.lowPrice << " "
    << st.previousPrice << " "
    << st.percentGain << " "
    << st.volume;

return os;

}

istream& operator >> (istream& is, Stock& st) {

    is >> st.stockSymbol
    >> st.openingPrice
    >> st.closingPrice
    >> st.highPrice
    >> st.lowPrice
    >> st.previousPrice
    >> st.volume;

return is;

}

Stock::Stock(){

    stockSymbol = " ";
    openingPrice = 0.0;
    closingPrice = 0.0;
    highPrice = 0.0;
    lowPrice = 0.0;
    previousPrice = 0.0;
    percentGain = 0.0;
    volume = 0;
}

void Stock::printStockInformation(){

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << setw(5) << stockSymbol <<setw(5)
    << setw(10) << openingPrice <<setw(5)
    << setw(10) << closingPrice <<setw(10)
    << setw(10) << highPrice <<setw(10)
    << setw(10) << lowPrice <<setw(10)
    << setw(10) << previousPrice <<setw(10);

    cout << setprecision(2) << percentGain << "%" << setw(10);
    cout << setw(10) << volume;

}

void Stock::showPrices(){

    cout << "Opening Price: " << openingPrice << endl;
    cout << "Closing Price: " << closingPrice << endl;
    cout << "Today's Highest: " << highPrice << endl;
    cout << "Today's Lowest: " << lowPrice << endl;
    cout << "Previous closing Price: " << previousPrice << endl;

}

void Stock::calculatePercentageGain(){

    percentGain = (closingPrice - openingPrice)/openingPrice * 100;

}

void Stock::showVolume(){

    cout << "Volume: " << volume << endl;
}


int Stock::operator>(const Stock& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

int Stock::operator<(const Stock& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

int Stock::operator==(const Stock& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

int Stock::operator!=(const Stock& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

double Stock::getPercentGain(){
    return percentGain;
}



