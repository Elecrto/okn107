#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void print_arr(int a[], const int N) {
	for (int i = 0; i != N; i++) {
		cout << a[i] << " ";
	}
}

int matr(int N, int a1, int r,int a[]) {
	for (int i = 1; i != N; i++) {
		a[i] = a1 + r;
		a1 = a1 + r;
	}
	return a[N];
}

int matrrand(int N, int a[]) {
	for (int i = 0; i != N; i++) {
		a[i] = rand()%1000 + 1000;
	}
	return a[N];
}

int perm(int a[], const int N) {
	for (int i = N; i > 1; i--) {
		int b = a[i-1];
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
int main(){
	setlocale(LC_ALL, "ru");
	srand(static_cast<unsigned int>(time(0)));

	cout << "1)¬ведите размер массива, первый элемент и разность:";
	int *A,N,a1, r;
	cin >> N >> a1 >> r;
	A= (int*)malloc(N * sizeof(int));
	A[0] = a1;
	matr(N, a1, r, A);
	print_arr(A, N);
	cout << endl;

	cout << "2)¬ведите N:";
	int *B,n;
	cin >> n;
	B = (int*)malloc(n * sizeof(int));
	B[0] = 1;
	matr(n, 1, 1, B);
	perm(B, n);
	print_arr(B, n);
	cout << endl;

	int *C,m;
	cout << "3)¬ведите размер матицы:";
	cin >> m;
	C = (int*)malloc(m * sizeof(int));
	matrrand(m, C);
	cout<< chet(C, m) << " элементов, у которых предпоследн€€ цифра четна€" << endl;
	print_arr(C, m);
	return 0;
}