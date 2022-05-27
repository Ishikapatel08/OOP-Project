#include "Stock.h"
#include "Market.h"
#include "StockList.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cassert>
using namespace std;

void printFinancialReport();
int printMenuPrompt();

void getGainLossArray( Stock MSET,
                       Stock IBS,
                       Stock CSCO,
                       Stock AOLK,
                       Stock CTR,
                       double arrayList[] );

int main() {

    int menuPromptOption;
    double gainLossList[5];

    Stock MSET, IBS, CSCO, AOLK, CTR;

    ifstream infile ("StockMarketList.txt");

    if(!infile){

        cout << "error text file not found." ;

    }

        else{
            infile >> MSET >> IBS >> CSCO >> AOLK >> CTR;

            CSCO.calculatePercentageGain();
            IBS.calculatePercentageGain();
            MSET.calculatePercentageGain();
            AOLK.calculatePercentageGain();
            CTR.calculatePercentageGain();

            /*StockList.insertAt(CSCO, 0);
            StockList.insertAt(IBS, 1);
            StockList.insertAt(MSET, 2);
            StockList.insertAt(AOLK, 3);
            StockList.insertAt(CTR, 4);*/

            printFinancialReport();
            //StockList.print();

            do{

                menuPromptOption = printMenuPrompt();

                if(menuPromptOption == 1) {

                  //  StockList.sortArrayByGain(gainLossList);

                    getGainLossArray(MSET, IBS, CSCO, AOLK, CTR, gainLossList);

                }

                if(menuPromptOption == 2) {

                    printFinancialReport();
                    //StockList.sort();
                    //StockList.print();
                }


            } while(menuPromptOption != 3);

        }



    return 0;

}

void printFinancialReport() {

    cout << "******************************************************************************\n"
         << "******************************************************************************\n\n"
         << "STOCK                  TODAY                   PREV       PERCENT             \n"
         << "SYMBOL     OPENING     CLOSING   MAX    MIN    CLOSING    GAIN      VOLUME    \n"
         << "******************************************************************************\n";


}

int printMenuPrompt() {

    int menuPromptOption;

    do{

        cout << "*************MENU*************" << endl;
        cout << endl << "1) Sort By Gain / Loss \n";
        cout << "2) Sort By Symbol \n";
        cout << "3) Exit \n" << endl;

        cin >> menuPromptOption;

        if(menuPromptOption == 0 || menuPromptOption > 3) {

            cout << setw(30) << "***********************" << endl;
            cout << setw(30) << "*        ERROR        *" << endl;
            cout << setw(30) << "***********************" << endl;
            cout << setw(30) << "*  NOT A VALID ENTRY  *" << endl;
            cout << setw(30) << "*  ENTER 1 , 2 OR 3!  *" << endl;
            cout << setw(30) << "***********************" << endl << endl;

        }

    } while (menuPromptOption == 0 || menuPromptOption > 3);

    return menuPromptOption;
}

void getGainLossArray(Stock MSET,
                       Stock IBS,
                       Stock CSCO,
                       Stock AOLK,
                       Stock CTR,
                       double arrayList[] )
{
       printFinancialReport();

       int length = 5;

       for(int i = 0; i < length; i++){

           if (MSET.getPercentGain() == arrayList[i]){
               MSET.printStockInformation();
               cout << endl << endl;
           }

           if (IBS.getPercentGain() == arrayList[i]){
               IBS.printStockInformation();
               cout << endl << endl;
           }

           if (CSCO.getPercentGain() == arrayList[i]){
               CSCO.printStockInformation();
               cout << endl << endl;
           }

           if (AOLK.getPercentGain() == arrayList[i]){
               AOLK.printStockInformation();
               cout << endl << endl;
           }

           if (CTR.getPercentGain() == arrayList[i]){
               CTR.printStockInformation();
               cout << endl << endl;
           }

       }
}