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

void change(int** a,int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            swap(a[i][j], a[n - j - 1][n - i - 1]);
        }
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n;
    cout << "Задание 3:" << endl << "Введите размер кв. матрицы(Одно число): ";
    cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    vvod(a, n, n);
    vivod(a, n, n);
    change(a, n);
    cout << "Ответ:" << endl;
    vivod(a, n, n);
    del_matr(a, n);
}
