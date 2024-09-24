#include<iostream>
#include <Windows.h> 
using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string a, buk;
	int b, c, v;

	setlocale(LC_ALL, "Rus");
	cout << "Введите своё имя: ";
	cin >> a;
	cout << "Введите свой возраст: ";
	cin >> b;
	cout << "Введите номер школы: ";
	cin >> c;
	cout << "Введите номер класса: ";
	cin >> v;
	cout << "Введите букву класса: ";
	cin >> buk;
	cout << endl;

	if (b == 16)
	{
		v = 9;
	}

	if (b == 18)
	{
		v = 11;
	}


	cout << "Привет " << a << "!" << endl << endl;
	cout << "Поздравляем с окончанием " << v << buk << " класса школы № " << c << " в " << 2024 - (b - v - 7) << " году!" << endl;


}
