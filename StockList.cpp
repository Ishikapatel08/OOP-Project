#include "StockList.h"
#include <iostream>
#include <string.h>

#include <iostream>
#include <cassert>
using namespace std;


template < class elemType>
    bool StockList <elemType> :: isEmpty () const {
        return (length == 0);
    }

template < class elemType>
    bool StockList <elemType> :: isFull () const {
        return (length == maxSize);
    }

template < class elemType>
    int StockList < elemType> :: getLength() const{
        return length;

    }
template < class elemType>
    int StockList < elemType> :: getMaxSize() const{
        return maxSize;

    }

template < class elemType>
    StockList< elemType> :: StockList(int size){

    }

template <class elemType>

void StockList<elemType>::sort()   //selection sort
{
    int i, j;
    int min;
    elemType temp;

    for (i = 0; i < length; i++) {

        min = i;

        for (j = i + 1; j < length; ++j){

            if (list[j] < list[min]){

                min = j;
            }
        }

        temp = list[i];

        list[i] = list[min];

        list[min] = temp;

    }//end for
}//end sort

template <class elemType>
void StockList<elemType>::print() const
{
    int i;

    for (i = 0; i < length; ++i)

        cout << list[i] << " ";

    cout << endl;

}//end print

template <class elemType>

void StockList<elemType>::insertAt(const elemType& item, int position) {

    assert(position >= 0 && position < maxSize);
    list[position] = item;
    length++;
}


template <class elemType>
//destructor
StockList<elemType>::~StockList() {
    delete [] list;
}
