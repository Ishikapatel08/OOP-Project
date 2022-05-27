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

    //This is the user menu selection
    int menuPromptOption;
    //To store gain loss percent
    double gainLossList[5];

    // Creat Stock objects
    Stock MSET, IBS, CSCO, AOLK, CTR;

    // Open the stock data file
    ifstream infile ("StockMarketList.txt");

    //Make sure data file is open
    if(!infile){
        cout << "error text file not found." ;

    }
        //Take in the data from the StockMarketList.txt
        else{
            infile >> MSET >> IBS >> CSCO >> AOLK >> CTR;

            //Calculate percent gain fro each object
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

            //Display the stock Information
            //Call te stock data header
            printFinancialReport();
            //StockList.print();

            do{

                menuPromptOption = printMenuPrompt();
                if(menuPromptOption == 1) {

                  //  StockList.sortArrayByGain(gainLossList);


                  //This displays the array by percentages Gain
                    getGainLossArray(MSET, IBS, CSCO, AOLK, CTR, gainLossList);

                }

                if(menuPromptOption == 2) {

                    //Call interface header
                    printFinancialReport();
                    //StockList.sort();
                    //StockList.print();
                }



            } while(menuPromptOption != 3);

        }

    // Terminate program
    return 0;

}

void printFinancialReport() {

    //Categories
    cout << "*******************************EVERDAY TRANSACTION****************************\n"
         << "******************************************************************************\n\n"
         << "STOCK                  TODAY                   PREV       PERCENT             \n"
         << "SYMBOL     OPENING     CLOSING   MAX    MIN    CLOSING    GAIN      VOLUME    \n"
         << "******************************************************************************\n\n\n";


}

int printMenuPrompt() {

    int menuPromptOption;

    do{

        //Display menu prompt
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