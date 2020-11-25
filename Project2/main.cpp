#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main(){
	SetConsoleCP(1251); // ���� ������� � ������� 
	SetConsoleOutputCP(1251); // ����� �������� �� �������
	double a, b, c, x1, x2;
	cout << "Input a, b, c:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a == 0) {
		x1 = -c / b;
		cout << "x = " << x1 << endl;
		return 0;
	}
	else if (b == 0 && a != 0 && c != 0) {
		if (c > 0) {
			cout << "There is no real solution" << endl;
			return 0;
		}
		else {
			x1 = sqrt(-c / a);
			x2 = sqrt(-c / a);
			cout << " x1 = " << x1 << ", x2 = " << x2 << endl;
			return 0;
		}
	}
	else if (c == 0 && b != 0 && a != 0) {
		x1 = 0;
		x2 = -b / a;
		cout << "x1 = " << x1 << ", x2 =" << x2 << endl;
	}
	else {
		double D = b * b - 4 * a * c;
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1 = " << x1 << ", x2 = " << x2 << endl;

	

	}


	
	
	system("pause");
	return 0;
}