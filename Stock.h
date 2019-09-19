#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class StockFile
{

public:

	StockFile();

	StockFile(string, int, double);

	~StockFile();

	string AccessByOrSell() const;

	int Access_Num_Shares() const;

	double Access_Price() const;

	void mutateBuyOrSell(string);

	void mutateNumShares(int);

	void mutatePrice(double);

	

protected:

	queue<int> StockQueue;
	string BuyOrSell;
	int numshares;
	double price;




};


StockFile::StockFile(){
}


StockFile::StockFile(string BOrS, int NumShares, double Price)
{
	
	BuyOrSell = BOrS;
	numshares = NumShares;
	price = Price;


}


StockFile::~StockFile()
{}

string StockFile::AccessByOrSell() const
{
	return BuyOrSell;
}

int StockFile::Access_Num_Shares() const
{
	return numshares;
}


double StockFile::Access_Price() const
{
	return price;

}

void StockFile::mutateBuyOrSell(string BOrS)
{
	BuyOrSell = BOrS;
}

void StockFile::mutateNumShares(int NumShares)
{
	numshares = NumShares;
}

void StockFile::mutatePrice(double Price)
{
	price = Price;
}



#endif 
