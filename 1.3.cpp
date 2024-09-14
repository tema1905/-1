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
	cout << "¬ведите радиус первого круга: ";
	cin >> p;
	cout << "¬ведите радиус второго круга: ";
	cin >> v;
	pr = PI * pow(p, 2);
	vr = PI * pow(v, 2);

	if (pr > vr)
	{
		cout << "ѕервый круг больше на " << pr - vr;
	}
	else if (pr < vr)
	{
		cout << "¬торой круг больше на " << vr - pr;
	}
	else if (pr == vr)
	{
		cout << "ќба круга равны";
	}
	cout << endl;
	



}




