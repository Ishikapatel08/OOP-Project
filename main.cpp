#include "Stock.h"
#include "Market.h"
#include "StockList.h"

#include <iostream>
#include <fstream>
#include iomanip
using namespace std;

void printFinanceReport();
int displayMenuPrompt();

void getGainLossArray( Stock MSET,
                       Stock IBS,
                       Stock CSCO,
                       Stock AOLK,
                       Stock CTR,
                       double ListArray[] );

int main() {

    int MenuPromptOptions;
    double ListOfGainLoss[5];
    Market ListOfStocks (5);
    Stock MSET, IBS, CSCO, AOLK, CTR;

    ifstream infile ("StockMarketList.txt");

    if(!infile){

        cout << "error text file not found." ;

        else{
            infile >> MSET >> IBS >> CSCO >> AOLK >> CTR;

            CSCO.calcPercentGain();
            IBS.calcPercentGain();
            MSET.calcPercentGain();
            AOLK.calcPercentGain();
            CTR.calcPercentGain();

            ListOfStock.insertAt(CSCO, 0);
            ListOfStock.insertAt(IBS, 1);
            ListOfStock.insertAt(MSET, 2);
            ListOfStock.insertAt(AOLK, 3);
            ListOfStock.insertAt(CTR, 4);

            printFinanceReport();
            ListOfStock.print();

            do{

                MenuPromptOptions = displayMenuPrompt();

                if(MenuPromptOptions == 1) {

                    ListOfStock.SortingGainLoss(ListOfGainLoss);

                    getGainLossArray(MSET, IBS, CSCO, AOLK, CTR, ListOfGainLoss);

                }

                if(MenuPromptOptions == 2) {

                    printFinanceReport();
                    ListOfStock.sort();
                    ListOfStock.print();
                }


            } while(MenuPromptOptions != 3);

        }

    }

    return 0;

}

void printFinanceReport() {

    cout << "******************************************************************************\n"
         << "******************************************************************************\n\n"
         << "STOCK                  TODAY                   PREV       PERCENT             \n"
         << "SYMBOL     OPENING     CLOSING   MAX    MIN    CLOSING    GAIN      VOLUME    \n"
         << "******************************************************************************\n";


}

int displayMenuPrompt() {

    int MenuPromptOptions;

    do{

        cout << "*************MENU*************" << endl;
        cout << endl << "1) Sort By Gain / Loss \n";
        cout << "2) Sort By Symbol \n";
        cout << "3) Exit \n" << endl';

        cin >> MenuPromptOptions;

        if(MenuPromptOptions == 0 || MenuPromptOptions > 3) {

            cout << setw(30) << "***********************" << endl;
            cout << setw(30) << "*        ERROR        *" << endl;
            cout << setw(30) << "***********************" << endl;
            cout << setw(30) << "*  NOT A VALID ENTRY  *" << endl;
            cout << setw(30) << "*  ENTER 1 , 2 OR 3!  *" << endl;
            cout << setw(30) << "***********************" << endl << endl;

        }

    } while (MenuPromptOptions == 0 || MenuPromptOptions > 3);

    return MenuPromptOptions;
}

void getGainLossArray(Stock MSET,
                       Stock IBS,
                       Stock CSCO,
                       Stock AOLK,
                       Stock CTR,
                       double ListArray[] )
{
       printFinanceReport();

       int length = 5;

       for(int i = 0; i < length; i++){

           if (MSET.getPercentGain() == ListArray[i]){
               MSET.printStockInfo();
               cout << endl << endl;
           }

           if (IBS.getPercentGain() == ListArray[i]){
               IBS.printStockInfo();
               cout << endl << endl;
           }

           if (CSCO.getPercentGain() == ListArray[i]){
               CSC0.printStockInfo();
               cout << endl << endl;
           }

           if (AOLK.getPercentGain() == ListArray[i]){
               AOLK.printStockInfo();
               cout << endl << endl;
           }

           if (CTR.getPercentGain() == ListArray[i]){
               CTR.printStockInfo();
               cout << endl << endl;
           }

       }
}