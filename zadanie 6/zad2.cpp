#include <iostream>
#include<time.h>
using namespace std;

void vvod(int** a, int n, int m) {
    for (int i = 0; i != n; i++) {
        for (int j = 0; j != m; j++) {
            a[i][j] = rand()%10;
        }
    }
}

void vivod(int** a, int n, int m) {
    for (int i = 0; i != n; i++) {
        for (int j = 0; j != m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void del_matr(int** a, int n) {
    for (int i = 0; i != n; i++) {
        delete[] a[i];
    }
}

void change(int** a,int** b,int** c,int n,int m1,int d) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < d; j++){
            c[i][j] = 0;
            for (int k = 0; k < m1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n, m1, m2, d;
    cout << "Задание 2:" << endl << "Введите размер первой матрицы:" << endl;
    cin >> n >> m1;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m1];
    vvod(a, n, m1);
    vivod(a, n, m1);

    cout << "Введите размер второй матрицы:" << endl;
    cin >> m2 >> d;
    if (m1 != m2) {
        cout << "Введены не правильные размеры матриц";
        return 0;
    }

    int** b = new int* [m2];
    for (int i = 0; i < n; i++)
        b[i] = new int[d];
    vvod(b, m2, d);
    vivod(b, m2, d);

    int** c = new int* [n];
    for (int i = 0; i < n; i++)
        c[i] = new int[d];

    change(a, b, c, n, m1, d);
    cout << "A * B = " << endl;
    vivod(c, n, d);

    del_matr(a, n);
    del_matr(b, m2);
    del_matr(c, m2);
}
