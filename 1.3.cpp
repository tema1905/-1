#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const double PI = 3.141592653589793;
	int p;
	int v;
	double vr;
	double pr;
	cout << "������� ������ ������� �����: ";
	cin >> p;
	cout << "������� ������ ������� �����: ";
	cin >> v;
	pr = PI * pow(p, 2);
	vr = PI * pow(v, 2);

	if (pr > vr)
	{
		cout << "������ ���� ������ �� " << pr - vr;
	}
	else if (pr < vr)
	{
		cout << "������ ���� ������ �� " << vr - pr;
	}
	else if (pr == vr)
	{
		cout << "��� ����� �����";
	}
	cout << endl;
	



}




