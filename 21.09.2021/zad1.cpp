#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int x;
	cin >> x;
	if (99 < x && x <= 999) {
		cout << "число трехзначное";
	}
	else {
		cout << "число не трехзначное";
	}
}