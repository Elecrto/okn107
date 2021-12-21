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
    int mn = INT_MAX, j2, i2, d;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] < mn && a[i][j] >= 0){
                mn = a[i][j];
                i2 = i;
                j2 = j;
            }
        }
    for (int i = 0; i < n; i++) {
        int d;
        d = a[i][j2];
        a[i][j2] = a[i2][i];
        a[i2][i] = d;
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n;
    cout << "задание 4 (работает только если мин. элемент на пересечении диагоналей):" << endl << "Введите размер кв. матрицы(Одно число):" << endl;
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
