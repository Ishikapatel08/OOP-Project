#ifndef STOCKLIST_H
#define STOCKLIST_H

#include <iostream>
#include <cassert>

using namespace std;

template <class elemType>

class StockList {

    public:
            int Length() const;

            int MaxSize() const;

            void sort();

            void print() const;

            void insertAt (const elemType& item, int position);

            StockList(string, double, double, double, double, double, int);

            ~StockList();


    protected:
            int showMaxSize;

            int showLength;

            elemType *List;

}
#endif