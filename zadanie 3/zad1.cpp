#include<iostream>
using namespace std;

void numb(int n) {
	if (n == 0) { return; }
	numb(n / 10);
	cout << n % 10<<" ";
}

int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cin >> n;
	numb(n);
	return 0;
}