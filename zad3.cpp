#include<iostream>
#include<math.h>
using namespace std;

int sum_del(int c) {
	int sum = 0;
	for (int g = 1; g != c / 2 + 1;g++) {
		if (c % g == 0) {
			sum = sum + g;
		}
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, d,f;
	f = 0;
	c = 0;
	d = 0;
	cout << "Все пары дружественных чисел ( до 10^4 ) : "<< endl;
	for (a = 1; a != 10000; a++) {
		c = sum_del(a);
		b = c;
		d = sum_del(b);
		if (a != f) {
			if (a == d && a != c) {
				cout << a << " " << b << endl;
				f = b;
			}
		}
		c = 0;
		d = 0;
	}
	return 0;
}