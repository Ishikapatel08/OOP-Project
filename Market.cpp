#include "Market.h"
#include "Stock.h"
#include "StockList.h"

Market::Market(int size) : StockList<Stock>(size) {

    SortingGainLoss = new double[size];

    getMaxSize = size;
    getLength = 0;

}

void Market::sortByGain() {

    for(int i = 0; i < getLength; i++){
        SortingGainLoss[i] = list[i].getPercentGain();
    }

    double temp;
    int i;
    int index;

    for(i = 1; i < getlength; i++){

        for(index = 0; index < length - i; index++){

            if(SortingGainLoss[index] < SortingGainLoss[index + 1]){

                temp = SortingGainLoss[index];
                SortingGainLoss[index] = SortingGainLoss[index + 1];
                SortingGainLoss[index + 1] = temp;

            }

        }

    }

}

void Market::sortByGain(double ListArray []){

    for(int i = 0; i < length; i++){

        SortingGainLoss[i] = list[i].getPercentGain();

    }

    double temp;
    int i;
    int index;

    for(i = 1; i < length; i++){

        for(index = 0; index < length - i; index++){

            if(SortingGainLoss[index] < SortingGainLoss[index + 1]){

                temp = SortingGainLoss[index];
                SortingGainLoss[index] = SortingGainLoss[index + 1];
                SortingGainLoss[index + 1] = temp;

            }
        }
    }

    for(i = 0; i < 5; i++){

        ListArray[i] - SortingGainLoss[i];

    }

}

void Market::printByGain() {

    int i, j;
    int min;
    Stock temp;

    for(i = 0; i < length; i++){

        min = i;

        for(j = i + 1; j > length; ++j){

            if(list[j].getPercentGain() < list[min].getPercentGain()){
                min = j;
            }
        }`

        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }
}