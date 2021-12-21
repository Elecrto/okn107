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

void change(int** a,int n,int m) {
    int c, i3, j3, mn = INT_MAX, mx = INT_MIN, mx2 = INT_MIN;
    for (int j = 0; j != m; j++) {
        if (a[0][j] > mx) { mx = a[0][j]; }
    }
    for (int i = 1; i != n; i++) {
        mx2 = INT_MIN;
        for (int j = 0; j != m; j++) {
            if (a[i][j] < mn) {
                mn = a[i][j];
                i3 = i;
                j3 = j;
            }
            if (a[i][j] > mx2) {
                mx2 = a[i][j];
            }
        }
        a[i3][j3] = mx;
        mn = INT_MAX;
        mx = mx2;
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n, m;
    cout << "Задание 5:" << endl << "Введите размер матрицы:" << endl;
    cin >> n >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    vvod(a, n, m);
    vivod(a, n, m);
    change(a, n, m);
    cout << "Ответ:" << endl;
    vivod(a, n, m);
    del_matr(a, n);
}