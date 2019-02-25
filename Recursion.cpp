// ConsoleApplication75.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int Add(int x)
{
	if (x > 0)

		return x + Add(x - 1);

	else
		return x;

}

int main()
{
	int number;
	cout << "Enter the number till which u want the sum of natural numbers" << endl;
	cin >> number;

	cout << "Here's the sum  " << Add(number) << endl;
}
