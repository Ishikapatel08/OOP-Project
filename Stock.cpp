#include "Stock.h"
#include <iostream>
#include <string.h>

using namespace std;

//WE INCLUDE INFORMATION ABOUT DAY TO DAY TRANSACTION, GENERAL ACCOUNT INFORMATION


ostream& operator << (ostream& os, const stockType& st) {

    os << st.stockSymbol << " "
    << st.OpeningPrice << " "
    << st.ClosingPrice << " "
    << st.MaxPrice << " "
    << st.MinPrice << " "
    << st.PrevPrice << " "
    << st.PercentGain << " "
    << st.volume;

return os;

}

istream& operator << (istream& is, const stockType& st) {

    is << st.stockSymbol
    << st.OpeningPrice
    << st.ClosingPrice
    << st.MaxPrice
    << st.MinPrice
    << st.PrevPrice
    << st.PercentGain
    << st.volume;

return is;

}

Stock::Stock(){

    stockSymbol = " ";
    OpeningPrice = 0.0;
    ClosingPrice = 0.0;
    MaxPrice = 0.0;
    MinPrice = 0.0;
    PrevClosing = 0.0;
    PercentGain = 0.0;
    volume = 0;
}

void Stock::printStockInfo(){

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << setw(5) << stockSymbol <<setw(5)
    << setw(10) << OpeningPrice <<setw(5)
    << setw(10) << ClosingPrice <<setw(10)
    << setw(10) << MaxPrice <<setw(10)
    << setw(10) << MinPrice <<setw(10)
    << setw(10) << PrevPrice <<setw(10);

    cout << setprecision(2) << PercentGain << "%" << setw(10);
    cout << setw(10) << volume;

}

void Stock::displayPrices(){

    cout << "Opening Price: " << OpeningPrice << endl;
    cout << "Closing Price: " << ClosingPrice << endl;
    cout << "Today's Maximum: " << MaxPrice << endl;
    cout << "Today's Manimum: " << MinPrice << endl;
    cout << "Previous Closing Price: " << PrevPrice << endl;

}

void Stock::calcPercentGain(){

    PercentGain = (ClosingPrice - OpeningPrice)/OpeningPrice * 100;

}

void Stock::displayVolume(){

    cout << "Volume: " << volume << endl;
}


int Stock::operator>(const stockType& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

int Stock::operator<(const stockType& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

int Stock::operator==(const stockType& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

int Stock::operator>(const stockType& st) const {
    return (stockSymbol.compare(st.stockSymbol));
}

double Stock::getPercentGain(){
    return PercentGain;
}



