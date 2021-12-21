#include <iostream>
using namespace std;

void vvod(int** a, int n, int m) {
    for (int i = 0; i != n; i++) {
        for (int j = 0; j != m; j++) {
            cin >> a[i][j];
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
void zad1()
{
    int n, m;
    cout << "задание 1:" << endl << "Введите размер матрицы:" << endl;
    cin >> n >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];

    int** b = new int* [n - 1];
    for (int i = 0; i < n - 1; i++)
        b[i] = new int[m - 1];
    int mn = INT_MAX;
    int i1, j1;

    cout << "Введите матрицу:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j]<mn)
            {
                mn = a[i][j];
                i1 = i;
                j1 = j;
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
            a[i-1][j] = a[i][j];
        a[n-1][j] = 0;
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m - 1; j++)
            b[i][j] = a[i][j];
    cout << "Ответ:" << endl;
    vivod(b, n - 1, m - 1);
    del_matr(a, n);
    del_matr(b, n - 1);
}

int zad2() {
    int n, m1,m2,d;
    cout << "Задание 2:" << endl<<"Введите размер первой матрицы:"<<endl;
    cin >> n >> m1;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m1];
    cout << "Введите первую матрицу:" << endl;
    vvod(a, n, m1);
    cout << "Введите размер второй матрицы:" << endl;
    cin >> m2 >> d;
    if (m1 != m2) {
        cout << "Введены не правильные размеры матриц";
        return 0;
    }

    int** b = new int* [m2];
    for (int i = 0; i < n; i++)
        b[i] = new int[d];

    cout << "Введите первую матрицу:" << endl;
    vvod(b, m2, d);

    int** c = new int* [n];
    for (int i = 0; i < n; i++)
        c[i] = new int[d];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    cout << "A * B = "<<endl;
    vivod(c, n, d);
    del_matr(a, n);
    del_matr(b, m2);
    del_matr(c, m2);
}

void zad3() {
    int n;
    cout << "Задание 3:" << endl << "Введите размер кв. матрицы(Одно число): ";
    cin >> n;

    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    cout << "Введите матрицу:" << endl;
    vvod(a, n, n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i- 1; j++){
            swap(a[i][j], a[n - j - 1][n - i - 1]);
        }
    }
    cout << "Ответ:" << endl;
    vivod(a, n, n);
    del_matr(a, n);
}
void zad4()
{
    int n, m, mn = INT_MAX, j2, i2, d;
    cout << "задание 4 (работает только если мин. элемент на пересечении диагоналей):" << endl << "Введите размер кв. матрицы(Одно число) и ее элементы:" << endl;
    cin >> n;

    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] < mn && a[i][j] >= 0)
            {
                mn = a[i][j];
                i2 = i;
                j2 = j;
            }
        }
    for (int i = 0; i < n; i++){
        int d;
        d = a[i][j2];
        a[i][j2] = a[i2][i];
        a[i2][i] = d;
    }

    cout << "Ответ:" << endl;
    vivod(a, n, n);
    del_matr(a, n);
}

void zad5() {
    int n,c,i3,j3, m,mn=INT_MAX,mx=INT_MIN,mx2=INT_MIN;
    cout << "Задание 5:" << endl << "Введите размер матрицы:" << endl;
    cin >> n >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    cout << "Введите матрицу:" << endl;
    vvod(a, n, m);

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
    cout << "Ответ:" << endl;
    vivod(a, n, m);
    del_matr(a, n);
}

int main() {
    setlocale(LC_ALL, "ru");
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
}
