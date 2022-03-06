#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "bankfuncs.h"

using namespace std;


int main()
{
	ifstream fin;
	char userAnswer = 'Y';
	const int size = 10;
	int ID;
	double saving, checking;
	int count = 0;
	string first, last;
	int Ids[size];
	double savings[size], checkings[size];
	string firsts[size], lasts[size];
	fin.open("input.txt");
	
	while (fin.good())
	{
		fin >> ID >> first >> last >> saving >> checking;
		Ids[count] = ID;
		firsts[count] = first;
		lasts[count] = last;
		savings[count] = saving;
		checkings[count] = checking;
		count += 1;
	}

	while (userAnswer != 'Q')
	{
		cout << "1. Print all customers data" << endl;
		cout << "2. Print names and ID's" << endl;
		cout << "3. Print accounts total" << endl;
		cout << "4. Enter q/Q to quit" << endl;
		cin >> userAnswer;
		userAnswer = toupper(userAnswer);

		switch (userAnswer)
		{
		case '1':
			PrintCustomersData(Ids, firsts, lasts, savings, checkings);
			break;

		case '2':
			PrintNames(firsts, lasts, count);
			break;

		case '3':
			PrintBankTotal(Ids, savings, checkings, count);
			break;

		case 'Q':
			exit(1);

		default:
			cout << "Please enter one of the options";
			continue;
		}
	}
}
