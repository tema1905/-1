#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const double PI = 3.141592653589793;
	int p;
	int v;
	double kv1, kv2, raz;
	double vr;
	double pr;
	cout << "Введите радиус первого круга: ";
	cin >> p;
	cout << "Введите радиус второго круга: ";
	cin >> v;
	pr = PI * pow(p, 2);
	vr = PI * pow(v, 2);
	kv1 = (p * 2) * (p * 2);
	kv2 = (v * 2) * (v * 2);

	if (pr > vr)
	{
		cout << "Первый круг больше на " << pr - vr;
		cout << "Разность площадей квадратов, в которые могут быть вписаны окружности: " << setprecision(2) <<fixed<< kv1 - kv2;
	}
	else if (pr < vr)
	{
		cout << "Второй круг больше на " << vr - pr;
		cout << "Разность площадей квадратов, в которые могут быть вписаны окружности: " << setprecision(2) <<fixed<< kv2 - kv1;
	}
	else if (pr == vr)
	{
		cout << "Оба круга равны";
	}
	cout << endl;
	

	



}




