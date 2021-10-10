#include<iostream>

using namespace std;

int fib(int n) {
	int c, a, b, d;
	a = 1;
	b = 1;
	c = 0;
	if (n == 0) {
		return 0;
	}
	else {
		while (c != n - 1) {
			d = b;
			b = b + a;
			a = d;
			c++;
		}
		return a;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "ВВедите номер числа Фибоначчи" << endl;
	cin >> n;
	cout << "Число Фибоначчи с номером " << n << " = " << fib(n);
}