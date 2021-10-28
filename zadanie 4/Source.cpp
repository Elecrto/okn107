#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void print_arr(int a[], const int N) {
	for (int i = 0; i != N; i++) {
		cout << a[i] << " ";
	}
}

int matr(int N, int a1, int r, int a[]) {
	for (int i = 1; i != N; i++) {
		a[i] = a1 + r;
		a1 = a1 + r;
	}
	return a[N];
}

int matrrand(int N, int a[]) {
	for (int i = 0; i != N; i++) {
		a[i] = rand() % 1000 + 1000;
	}
	return a[N];
}

int perm(int a[], const int N) {
	for (int i = N; i > 1; i--) {
		int b = a[i - 1];
		int j = rand() % i;
		a[i - 1] = a[j];
		a[j] = b;
	}
	return a[N];
}

int chet(int a[], const int N) {
	int c = 0;
	for (int i = 0; i != N; i++) {
		if (((a[i] % 100) / 10) % 2 == 0) {
			c = c + 1;
		}
	}
	return c;
}

void zad1(int N, int a1, int r, int a[]) {
	a[0] = a1;
	matr(N, a1, r, a);
	print_arr(a, N);
	cout << endl;
}

void zad2(int N, int a1, int r, int a[]) {
	a[0] = 1;
	matr(N, 1, 1, a);
	perm(a, N);
	print_arr(a, N);
	cout << endl;
}

void zad3(int N, int a[]) {
	matrrand(N, a);
	cout << chet(a, N) << " элементов, у которых предпоследняя цифра четная" << endl;
	print_arr(a, N);
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(static_cast<unsigned int>(time(0)));

	cout << "1)Введите размер массива, первый элемент и разность:";
	int* A, N, a1, r;
	cin >> N >> a1 >> r;
	A = (int*)malloc(N * sizeof(int));
	zad1(N, a1, r, A);
	delete[] A;

	cout << "2)Введите N:";
	int* B, n;
	cin >> n;
	B = (int*)malloc(n * sizeof(int));
	zad2(n, 1, 1, B);
	delete[] B;

	int* C, m;
	cout << "3)Введите размер матицы:";
	cin >> m;
	C = (int*)malloc(m * sizeof(int));
	zad3(m, C);
	delete[] C;
	return 0;
}
