#include <iostream>
#include <fstream>
#include "Methods.h"


int main()
{
	Methods Obj;

	
	//clientfin.close();

	ifstream clientfin;

	double price;
	int num, a, b;
	string txtF, fname, transaction;

	cout << "What is the name of your text file? Remember to add \".txt\" at the end: ";
	cin >> txtF;

	cout << endl;


	clientfin.open(txtF);
	while (!clientfin.eof())
	{

		clientfin >> fname;

		if (clientfin.eof())
		{
			break;
		}
		cout << fname << endl;

	
		ifstream fin;
		fin.open(fname);

		while (!fin.eof())
		{
			fin >> transaction >> num >> price;
			if (fin.eof())
			{
				break;
			}

			StockFile line(transaction, num, price);


			if (line.AccessBORS() == "Buy" || line.AccessBORS() == "BUY" || line.AccessBORS() == "buy")
			{
				Obj.StockQueue.push(line);
			}
			else
			{
				Obj.StockQueue.pop();
			}


			cout << transaction << "  " << num << " " << price << endl; // Just prints out what's been input in the file

			

		}
		cout << endl << endl;

		fin.close(); // Gives Each DAT file some space 

	}

	cout << "Size of QUEUE is: " << Obj.StockQueue.size() << endl;

	

	system("pause");
	return 0;
}