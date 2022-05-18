MAKEFILE
all: tests project

project: main.o
    g++ main.o Market.o StockList.o Stock.o -o project

Market.o: Market.h Market.cpp
g++ -c

Stock.o: Stock.h Stock.cpp
g++ -c

StockList.o: StockList.cpp StockList.h
g++ -c



clean:
    rm -f *.o project