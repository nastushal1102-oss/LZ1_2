#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x;
	cout << "Введіть x: ";
	cin >> x;

	if (2 * x + 1 == 0 || 1 + 3 * x == 0) {
		cout << "Помилка: ділення на нуль!" << endl;
		return 1;
	}
	double y = (sin(x) - x * x / (2 * x + 1)) + ((1 + x) * (1 + x)) / (1 + 3 * x);
	cout << "y = " << y << endl;
	return 0;
}