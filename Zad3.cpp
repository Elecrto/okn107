#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	long int a,d;
	cout << "������� ����� ����� �� 1 �� 10^7: "<< endl;
	cin >> d;
	if (d>=1 && d < 10000001 && d !=0) {
		a = d / 1000000;
		switch (a) {
		case 1:cout << "���� " << "������� "; break;
		case 2:cout << "��� " << "�������� "; break;
		case 3:cout << "��� " << "�������� "; break;
		case 4:cout << "������ " << "�������� "; break;
		case 5:cout << "���� " << "��������� "; break;
		case 6:cout << "����� " << "��������� "; break;
		case 7:cout << "���� " << "��������� "; break;
		case 8:cout << "������ " << "��������� "; break;
		case 9:cout << "������ " << "��������� "; break;
		case 10:cout << "������ " << "��������� "; break;
		}
		a = d % 1000000 / 100000;
		switch (a) {
		case 1:cout << "��� "; break;
		case 2:cout << "������ "; break;
		case 3:cout << "������ "; break;
		case 4:cout << "��������� "; break;
		case 5:cout << "������� "; break;
		case 6:cout << "�������� "; break;
		case 7:cout << "������� "; break;
		case 8:cout << "��������� "; break;
		case 9:cout << "��������� "; break;
		}
		a = d % 100000 / 10000;
		if (a == 1 && a % 10 != 0) {
			a = a % 10;
			switch (a) {
			case 1:cout << "����������� " << "����� "; break;
			case 2:cout << "���������� " << "����� "; break;
			case 3:cout << "���������� " << "����� "; break;
			case 4:cout << "������������ " << "����� "; break;
			case 5:cout << "���������� " << "����� "; break;
			case 6:cout << "����������� " << "����� "; break;
			case 7:cout << "���������� " << "����� "; break;
			case 8:cout << "������������ " << "����� "; break;
			case 9:cout << "������������ " << "����� "; break;
			}
		}
		else if (d % 100000 / 10000 != 0 || d % 10000 / 1000 != 0) {
			a = d % 100000 / 10000;
			switch (a) {
			case 1:cout << "������ "; break;
			case 2:cout << "�������� "; break;
			case 3:cout << "�������� "; break;
			case 4:cout << "����� "; break;
			case 5:cout << "��������� "; break;
			case 6:cout << "���������� "; break;
			case 7:cout << "��������� "; break;
			case 8:cout << "����������� "; break;
			case 9:cout << "��������� "; break;
			}
			a = d % 10000 / 1000;
			switch (a) {
			case 1:cout << "���� " << "������ "; break;
			case 2:cout << "��� " << "������ "; break;
			case 3:cout << "��� " << "������ "; break;
			case 4:cout << "������ " << "������ "; break;
			case 5:cout << "���� " << "����� "; break;
			case 6:cout << "����� " << "����� "; break;
			case 7:cout << "���� " << "����� "; break;
			case 8:cout << "������ " << "����� "; break;
			case 9:cout << "������ " << "����� "; break;
			default: cout << "����� ";
			}
		}
		a = d % 1000 / 100;
		switch (a) {
		case 1:cout << "��� "; break;
		case 2:cout << "������ "; break;
		case 3:cout << "������ "; break;
		case 4:cout << "��������� "; break;
		case 5:cout << "������� "; break;
		case 6:cout << "�������� "; break;
		case 7:cout << "������� "; break;
		case 8:cout << "��������� "; break;
		case 9:cout << "��������� "; break;
		}
		a = d % 100 / 10;
		if (a == 1 && a % 10 != 0) {
			a = d % 10;
			switch (a) {
			case 1:cout << "����������� "; break;
			case 2:cout << "���������� " ; break;
			case 3:cout << "���������� " ; break;
			case 4:cout << "������������ " ; break;
			case 5:cout << "���������� " ; break;
			case 6:cout << "����������� " ; break;
			case 7:cout << "���������� " ; break;
			case 8:cout << "������������� " ; break;
			case 9:cout << "������������ " ; break;
			}
		}
		else {
			switch (a) {
			case 1:cout << "������ "; break;
			case 2:cout << "�������� "; break;
			case 3:cout << "�������� "; break;
			case 4:cout << "����� "; break;
			case 5:cout << "��������� "; break;
			case 6:cout << "���������� "; break;
			case 7:cout << "��������� "; break;
			case 8:cout << "����������� "; break;
			case 9:cout << "��������� "; break;
			}
			a = d % 10;
			switch (a) {
			case 1:cout << "���� "; break;
			case 2:cout << "��� "; break;
			case 3:cout << "��� "; break;
			case 4:cout << "������ "; break;
			case 5:cout << "���� "; break;
			case 6:cout << "����� "; break;
			case 7:cout << "���� "; break;
			case 8:cout << "������ "; break;
			case 9:cout << "������ "; break;
			}
		}
	}
	else {
		cout << "������� ������������ ��������!";
	}
	return 0;
}