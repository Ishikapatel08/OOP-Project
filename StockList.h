#ifndef STOCKLIST_H
#define STOCKLIST_H

#include <iostream>
#include <cassert>

using namespace std;

template <class elemType>

class StockList{

    public:
        bool isEmpty() const;
        bool isFull() const;
        int getLength() const;
        int getMaxSize() const;
        void sort();
        void print() const;
        void insertAt (const elemType& item, item postion);
        StockList(int size);

    ~StockList();


    protected:
            int maxSize;
            int length;
            elemType *list;

    private:

    template < class elemType>
    bool StockList <elemType> :: is Full () const {
        return (length == maxSize);
    }

    template < class elemType>
    int StockList < elemType> :: getMaxSize() const{
        return maxSize;
    }
    template < class elemType>
    StockList< elemType> :: StockList(int size){
    }
};
#endif