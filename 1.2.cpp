#include<iostream>
#include <Windows.h> 
using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string a;
	int b, c, v;

	setlocale(LC_ALL, "Rus");
	cout << "������� ��� ���: ";
	cin >> a;
	cout << "������� ���� �������: ";
	cin >> b;
	cout << "������� ����� �����: ";
	cin >> c;
	cout << "������� ����� ������: ";
	cin >> v;
	cout << endl;

	if (b == 16)
	{
		v = 9;
	}

	if (b == 18)
	{
		v = 11;
	}


	cout << "������ " << a << "!" << endl << endl;
	cout << "����������� � ���������� " << v << " ������ ����� � " << c << " � " << 2024 - (b - v - 7) << " ����!" << endl;


}