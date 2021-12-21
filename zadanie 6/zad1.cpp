#include <iostream>
#include<time.h>
using namespace std;

void vvod(int** a, int n, int m) {
    for (int i = 0; i != n; i++) {
        for (int j = 0; j != m; j++) {
            a[i][j] = rand()%20-10;
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

void change(int** a,int** b,int n,int m) {
    int mn = INT_MAX;
    int i1, j1;
    for (int i = 0; i != n; i++) {
        for (int j = 0; j != m; j++) {
            if (a[i][j] < mn) {
                mn = a[i][j];
                i1 = i;
                j1 = j;
            }
        }
    }
    for (int i = 0; i < n; i++)
        a[i][j1] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = j1 + 1; j < m; j++)
            a[i][j - 1] = a[i][j];
        a[i][m - 1] = 0;
    }

    for (int j = 0; j < m; j++)
        a[i1][j] = 0;
    for (int j = 0; j < m; j++) {
        for (int i = i1 + 1; i < n; i++)
            a[i - 1][j] = a[i][j];
        a[n - 1][j] = 0;
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m - 1; j++)
            b[i][j] = a[i][j];
}

void del_matr(int** a, int n) {
    for (int i = 0; i != n; i++) {
        delete[] a[i];
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n, m;
    cout << "задание 1:" << endl << "Введите размер матрицы:" << endl;
    cin >> n >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];

    int** b = new int* [n - 1];
    for (int i = 0; i < n - 1; i++)
        b[i] = new int[m - 1];

    vvod(a, n, m);
    vivod(a, n, m);
    change(a, b, n, m);
    cout << "Ответ:" << endl;
    vivod(b, n - 1, m - 1);
    del_matr(a, n);
    del_matr(b, n - 1);
}