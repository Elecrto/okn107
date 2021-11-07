#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void print_arr(int a[], const int N) {
	for (int i = 0; i != N; i++) {
		cout << a[i]<<" ";
	}
}

int random(int N) {
	return rand() % N;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(static_cast<unsigned int>(time(0)));
	const int N = 10;
	int A[N];

	for (int i = 0; i != N; i++) {
		A[i] = random(21) - 10;
	}

	print_arr(A, N);
	cout << endl;
	for (int i = 0; i < N/4; i++) {
		int a = A[i];
		A[i] = A[N/2 -i- 1];
		A[N/2 - i - 1] = a;
	}
	for (int i = N/2; i < 3*N / 4 ; i++) {
		int a = A[i];
		A[i] = A[N - i/2 + 1];
		A[N - i/2 + 1] = a;
	}
	
	print_arr(A, N);
	return 0;
}