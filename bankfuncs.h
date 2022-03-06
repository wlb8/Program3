#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void PrintCustomersData(int Ids[], string firsts[], string lasts[], double savings[], double checkings[])
{

	for (int i = 0; i < 10; ++i)
	{
		cout << Ids[i] << " " << firsts[i] << " " << lasts[i] << " " << savings[i] << " " << checkings[i] << endl;
	}
}

void PrintNames(string firsts[], string lasts[], int count)
{
	string temp;
	for (int i = 0; i < count - 1; ++i)
	{
		for (int j = 0; j < count - 1; ++j)
		{
			if (firsts[j] > firsts[j + 1])
			{
				temp = firsts[j];
				firsts[j] = firsts[j + 1];
				firsts[j + 1] = temp;

				temp = lasts[j];
				lasts[j] = lasts[j + 1];
				lasts[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << firsts[i] << " " << lasts[i] << endl;
	}
	cout << "The number of users is " << count << endl;
	
}

void PrintBankTotal(int ids[], double savings[], double checkings[], int count)
{
	for (int i = 0; i < count; ++i)
	{
		double total;
		total = savings[i] + checkings[i];
		cout << fixed << setprecision(2) << ids[i] << " " << savings[i] << " " << checkings[i] << " " << total << endl;
	}
}
