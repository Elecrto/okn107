#include<iostream>
#include<cmath>
using namespace std;

int numb(int n,int i=0) {
	if (n != 0)
		return (n % 10) * (pow(2, i)) + numb(n / 10, i + 1);
	else
		return 0;
}

int main() {
	int n;
	cin >> n;
	cout << numb(n);
	return 0;
}