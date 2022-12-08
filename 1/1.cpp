#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double x, y, z;
	cout << "Введіть діаметр x=";
		cin >> x;
		y = (3.14 * x);
		z = (2 * x * 3.14);
		cout << "Довжина кола у=" << y << endl;
		cout << "Площа кола z=" << z << endl;
		system("pause>>void");
		return 0;
}