#ifndef METHODS_H
#define METHODS_H
#include <iostream>
#include <string>
#include "StockFile.h"
#include <algorithm>
#include <queue>
using namespace std;

class Methods : public StockFile
{

private:
	
public:

	queue<StockFile> StockQueue;

	//Methods();

	//void Capital();




};


//Methods::Methods()
//{
//	ifstream clientfin;
//
//	string txtF, fname;
//	cout << "What is the name of your text file? Remember to add \".txt\" at the end: ";
//	cin >> txtF;
//
//	cout << endl;
//
//
//	clientfin.open(txtF);
//	while (!clientfin.eof())
//	{
//
//		clientfin >> fname;
//
//		if (clientfin.eof())
//		{
//			break;
//		}
//		cout << fname << endl;
//
//		double price;
//		int num, a, b;
//		string transaction;
//		ifstream fin;
//		fin.open(fname);
//
//		while (!fin.eof())
//		{
//			bool size = true;
//
//			fin >> transaction >> num >> price;
//			if (fin.eof())
//			{
//				bool size = false;
//				break;
//			}
//			StockFile line(transaction, num, price);
//			
//			
//		
//			
//				if (transaction == "buy" || transaction == "Buy" || transaction == "BUY")
//				{
//					StockQueue.push(line);
//				}
//				else
//				{
//					StockQueue.pop();
//				}
//			
//			
//
//			cout << transaction << "  " << num << " " << price << endl; // Just prints out what's been input in the file
//
//		}
//		cout << endl << endl;
//
//		fin.close(); // Gives Each DAT file some space 
//
//	}
//	cout << "Size of QUEUE is: " << StockQueue.size() << endl;
//}

//void Methods::Capital()
//{
//
//}
#endif 
