#include "Stock.h"
#include "Market.h"

int main() {

    stockListType stockList;

    stockType stockTemp;



    stockTemp.setStockInfo("IBD", 68.00, 71.00, 72.00, 67.00, 75.00, 15000);

    stockList.insertAt(stockTemp, 0);



    stockTemp.setStockInfo("MSET", 120.00, 140.00, 145.00, 140.00, 115.00, 30920);

    stockList.insertAt(stockTemp, 1);



    stockTemp.setStockInfo("AOLK", 80.00, 75.00, 82.00, 74.00, 83.00, 5000);

    stockList.insertAt(stockTemp, 2);



    stockTemp.setStockInfo("CSCO", 100.00, 102.00, 105.00, 98.00, 101.00, 25000);

    stockList.insertAt(stockTemp, 3);



    stockTemp.setStockInfo("ABC", 123.45, 130.95, 132.00, 125.00, 120.50, 10000);

    stockList.insertAt(stockTemp, 4);
}