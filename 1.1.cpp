#include<iostream>
using namespace std;

void main()
{
	int a;
	int b;
	setlocale(LC_ALL, "Rus");
	cout << "Введите два числа: " << endl;
	cin >> a >> b;
	cout <<"Сумма чисел: "<< a + b <<  endl;
	cout << "Разность чисел: " << a - b << endl;
	cout << "Произведение чисел: " << a * b << endl;
	cout << "Среднее арифметическое: " << (a + b)/2 << endl;

	if (a < 0)
	{
		a = -a;
	}

	if (b < 0)
	{
		b = -b;
	}

	if (a > b)
	{
		cout << "Разность максимального и минимального по модулю равна: " << a - b << endl;

	}

	else if (b>a)
	{
		cout << "Разность максимального и минимального по модулю равна: " << b - a << endl;
	}
	
}
