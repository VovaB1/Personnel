// PersonnelProj.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "sum.h"
#include "minus.h"


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
	switch (count) // ������ ��������� switch
	{
	case 1: // ���� count = 1
	{
		cout <<	sum(a, b) << endl; // ��������� ��������
		break;
	}
	case 2: // ���� count = 2
	{
		cout << minus(a, b) << endl; // ��������� ���������
		break;
	}
	case 3: // ���� count = 3
	{
		cout << "In development" << endl; // ��������� ���������
		break;
	}
	case 4: // ���� count = 4
	{
		cout << "In development" << endl; // ��������� �������
		break;
	}
	default: // ���� count ����� ������ ������� ��������
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}