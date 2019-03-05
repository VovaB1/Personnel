// PersonnelProj.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "sum.h"
#include "minus.h"
#include "multiply.h"
using namespace std;

int main(int argc, char* argv[])
{
	int count; 
	double a, b;
	cout << "Enter 1st number: ";
	cin >> a;
	cout << "Enter 2nd number: ";
	cin >> b;
	cout << "Choose operation: 1-`+`; 2-`-`; 3-`*`; 4-`/`: ";
	cin >> count;
	switch (count) // начало оператора switch
	{
	case 1: // если count = 1
	{
		cout <<	sum(a, b) << endl; // выполнить сложение
		break;
	}
	case 2: // если count = 2
	{
		cout << minus2(a, b) << endl; // выполнить вычитание
		break;
	}
	case 3: // если count = 3
	{
		cout << multi(a, b) << endl; // выполнить умножение
		break;
	}
	case 4: // если count = 4
	{
		cout << "In development" << endl; // выполнить деление
		break;
	}
	default: // если count равно любому другому значению
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}