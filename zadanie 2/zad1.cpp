#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int kub() {
	int rnd_number = rand();
	return 1 + rnd_number % 6;
}

int main() {
	setlocale(LC_ALL, "rus");
	srand(static_cast<unsigned int>(time(0)));
	cout << "������ �����: " << kub() << endl;
	cout << "������ �����: " << kub();
	return 0;
}