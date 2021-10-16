#include<iostream>
#include<cmath>
using namespace std;

void multip(int n,int i=2) {
	if (n > 1) {
		if (n % i == 0) {
			cout << i << " ";
			multip(n / i);
		}
		else {
			multip(n, i + 1);
		}
	}
	else { return; }
}

int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1;
	}
	else if(n > 1){
		multip(n);
	}
	else {
		cout << "¬водите натуральное число!";
	}
	return 0;
}