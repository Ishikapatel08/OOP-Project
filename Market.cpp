#include "Market.h"
#include "StockList.h"
#include "Stock.h"

#include <iostream>

template <class elemType>
//Default Constructor
Market <elemType>::Market(int size) {

    sortIndicesGainLoss = new double[size];

    //initialize maxsise and length
    maxSize = size;
    length = 0;

}

template <class elemType>
//Sorts array of indicies in order based on percente gain
void Market <elemType>::sortArrayByGain() {

    //For loop to make the make the sortIndicesGain equal to getpercentgain
    for(int i = 0; i < length; i++){
        sortIndicesGainLoss[i] = list[i].getPercentGain();
    }

    //initialize temp, i and index
    double temp;
    int i;
    int index;

    //For loop to sort out the transactions by Gain and Loss
    for(i = 1; i < length; i++){

        for(index = 0; index < length - i; index++){

            if(sortIndicesGainLoss[index] < sortIndicesGainLoss[index + 1]){

                temp = sortIndicesGainLoss[index];
                sortIndicesGainLoss[index] = sortIndicesGainLoss[index + 1];
                sortIndicesGainLoss[index + 1] = temp;

            }

        }

    }

}

template <class elemType>
//Sorts array in terms of
void Market <elemType>::sortArrayByGain(double arrayList []){

    for(int i = 0; i < length; i++){

        sortIndicesGainLoss[i] = list[i].getPercentGain();

    }

    double temp;
    int i;
    int index;

    for(i = 1; i < length; i++){

        for(index = 0; index < length - i; index++){

            if(sortIndicesGainLoss[index] < sortIndicesGainLoss[index + 1]){

                temp = sortIndicesGainLoss[index];
                sortIndicesGainLoss[index] = sortIndicesGainLoss[index + 1];
                sortIndicesGainLoss[index + 1] = temp;

            }
        }
    }

    for(i = 0; i < 5; i++){

        arrayList[i] = sortIndicesGainLoss[i];

    }

}

template <class elemType>
//Prints out the array in terms of the
void Market <elemType>::printByGain() {

    int i, j;
    int min;
    Stock temp;

    for(i = 0; i < length; i++){

        min = i;

        for(j = i + 1; j > length; ++j){

            if(list[j].getPercentGain() < list[min].getPercentGain()){
                min = j;
            }
        }

        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }
}