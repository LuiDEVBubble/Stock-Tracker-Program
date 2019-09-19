#ifndef STOCKFILE_H
#define STOCKFILE_H
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

	string AccessBORS() const;

	int AccessNumShares() const;

	double AccessPrice() const;

	void mutateBORS(string);

	void mutateNumShares(int);

	void mutatePrice(double);

	

protected:

	
	string BuyOrSell;
	int numshares;
	double price;




};


StockFile::StockFile(){
}

StockFile::~StockFile()
{}

StockFile::StockFile(string BOrS, int NumShares, double Price)
{
	BuyOrSell = BOrS;
	numshares = NumShares;
	price = Price;
}

string StockFile::AccessBORS() const
{
	return BuyOrSell;
}


int StockFile::AccessNumShares() const
{
	return numshares;
}


double StockFile::AccessPrice() const
{
	return price;

}

void StockFile::mutateBORS(string BOrS)
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
