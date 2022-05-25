#ifndef MARKET_H
#define MARKET_H

#include "StockList.h"
#include "Stock.h"

#include <iostream>
#include <cassert>

using namespace std;

template <class elemType>

class Market {

    public:

    Market(int size);
    void sortArrayByGain();
    void sortArrayByGain(double arrayList []);
    void printByGain();

    ~Market();

    protected:
         int maxSize;
        int length;
        elemType *list;
        double * sortIndicesGainLoss;



};
#endif