#include "StockList.h"
#include <iostream>
#include <string.h>

#include <iostream>
#include <cassert>
using namespace std;

//STOCKS THEY CAN BUY AND SELL, DATABSE FOR THE STOCKS/ SHARES

template <class elemType>

bool StockList<elemType>::isEmpty() const {
    return (showLength == 0);
}

template <class elemType>

bool StockList<elemType>::isFull() const {
    return (showLength == showMaxSize);
}

template <class elemType>

int StockList<elemType>::Length() const {
    return showLength;
}

template <class elemType>

int StockList<elemType>::MaxSize() const {
    return showMaxSize;
}

    //Constructor; the default array size is 50
template <class elemType>

StockList<elemType>::StockList(string, double, double, double, double, double, int) {
    showMaxSize = listSize;
    showLength = 0;
    List = new elemType[showMaxSize];
}

template <class elemType>
//destructor
StockList<elemType>::~StockList() {
    delete [] List;
}

template <class elemType>

void StockList<elemType>::sort()   //selection sort
{
    int i, j;
    int min;
    elemType temp;

    for (i = 0; i < showLength; i++) {

        min = i;

        for (j = i + 1; j < showLength; ++j){

            if (List[j] < List[min]){

                min = j;
            }
        }

        temp = List[i];

        List[i] = List[min];

        List[min] = temp;

    }//end for
}//end sort

template <class elemType>
void StockList<elemType>::print() const
{
    int i;

    for (i = 0; i < showLength; ++i)

        cout << List[i] << " ";

    cout << endl;

}//end print

template <class elemType>

void StockList<elemType>::insertAt(const elemType& item, int position) {

    assert(position >= 0 && position < showMaxSize);
    List[position] = item;
    showLength++;
}