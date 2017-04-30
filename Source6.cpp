#include<iostream>
#include<string>

using namespace std;

void barcode(int);


int main()
{

	int zip = int();
	int d1 = int();
	int d2 = int();
	int d3 = int();
	int d4 = int();
	int d5 = int();
	string frameBar = ("|");

	cout << "Enter Your Zip Code: ";
	cin >> zip;
	cout<<endl<<endl;


	d5 = zip % 10;
	d4 = (zip % 100) / 10;
	d3 = (zip % 1000) / 100;
	d2 = (zip % 10000) / 1000;
	d1 = (zip % 100000) / 10000;

	cout << frameBar;
	barcode(d1);
	barcode(d2);
	barcode(d3);
	barcode(d4);
	barcode(d5);
	cout << frameBar<<endl;

	return 0;

}


void barcode(int digit)
{

	if (digit == 1)
		cout << (":::||"); //00011

	else if (digit == 2)  
		cout << ("::|:|"); //00101

	else if (digit == 3)
		cout << ("::||:"); //00110

	else if (digit == 4)
		cout << (":|::|"); //01001

	else if (digit == 5)
		cout << (":|:|:"); //01010

	else if (digit == 6)
		cout << (":||::"); //01100

	else if (digit == 7)
		cout << ("|:::|"); //10001

	else if (digit == 8)
		cout << ("|::|:"); //10010

	else if (digit == 9)
		cout << ("|:|::"); //10100

	else if (digit == 0)
		cout << ("||:::"); //11000
}
