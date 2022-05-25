#include "Market.h"
#include "StockList.h"
#include "Stock.h"

#include <iostream>

template <class elemType>
Market <elemType>::Market(int size) {

    sortIndicesGainLoss = new double[size];

    maxSize = size;
    length = 0;

}

template <class elemType>
void Market <elemType>::sortArrayByGain() {

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

}

template <class elemType>
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