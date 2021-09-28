#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	long int a,d;
	cout << "¬ведите целое число от 1 до 10^7: "<< endl;
	cin >> d;
	if (d>=1 && d < 10000001 && d !=0) {
		a = d / 1000000;
		switch (a) {
		case 1:cout << "один " << "миллион "; break;
		case 2:cout << "два " << "миллиона "; break;
		case 3:cout << "три " << "миллиона "; break;
		case 4:cout << "четыре " << "миллиона "; break;
		case 5:cout << "п€ть " << "миллионов "; break;
		case 6:cout << "шесть " << "миллионов "; break;
		case 7:cout << "семь " << "миллионов "; break;
		case 8:cout << "восемь " << "миллионов "; break;
		case 9:cout << "дев€ть " << "миллионов "; break;
		case 10:cout << "дес€ть " << "миллионов "; break;
		}
		a = d % 1000000 / 100000;
		switch (a) {
		case 1:cout << "сто "; break;
		case 2:cout << "двести "; break;
		case 3:cout << "триста "; break;
		case 4:cout << "четыреста "; break;
		case 5:cout << "п€тьсот "; break;
		case 6:cout << "шестьсот "; break;
		case 7:cout << "семьсот "; break;
		case 8:cout << "восемьсот "; break;
		case 9:cout << "дев€тьсот "; break;
		}
		a = d % 100000 / 10000;
		if (a == 1 && a % 10 != 0) {
			a = a % 10;
			switch (a) {
			case 1:cout << "одиннадцать " << "тыс€ч "; break;
			case 2:cout << "двенадцать " << "тыс€ч "; break;
			case 3:cout << "тринадцать " << "тыс€ч "; break;
			case 4:cout << "четырнадцать " << "тыс€ч "; break;
			case 5:cout << "п€тнадцать " << "тыс€ч "; break;
			case 6:cout << "шестнадцать " << "тыс€ч "; break;
			case 7:cout << "семнадцать " << "тыс€ч "; break;
			case 8:cout << "восемнадцать " << "тыс€ч "; break;
			case 9:cout << "дев€тнадцать " << "тыс€ч "; break;
			}
		}
		else if (d % 100000 / 10000 != 0 || d % 10000 / 1000 != 0) {
			a = d % 100000 / 10000;
			switch (a) {
			case 1:cout << "дес€ть "; break;
			case 2:cout << "двадцать "; break;
			case 3:cout << "тридцать "; break;
			case 4:cout << "сорок "; break;
			case 5:cout << "п€тьдес€т "; break;
			case 6:cout << "шестьдес€т "; break;
			case 7:cout << "семьдес€т "; break;
			case 8:cout << "восемьдес€т "; break;
			case 9:cout << "дев€носто "; break;
			}
			a = d % 10000 / 1000;
			switch (a) {
			case 1:cout << "одна " << "тыс€ча "; break;
			case 2:cout << "две " << "тыс€чи "; break;
			case 3:cout << "три " << "тыс€чи "; break;
			case 4:cout << "четрые " << "тыс€чи "; break;
			case 5:cout << "п€ть " << "тыс€ч "; break;
			case 6:cout << "шесть " << "тыс€ч "; break;
			case 7:cout << "семь " << "тыс€ч "; break;
			case 8:cout << "восемь " << "тыс€ч "; break;
			case 9:cout << "дев€ть " << "тыс€ч "; break;
			default: cout << "тыс€ч ";
			}
		}
		a = d % 1000 / 100;
		switch (a) {
		case 1:cout << "сто "; break;
		case 2:cout << "двести "; break;
		case 3:cout << "триста "; break;
		case 4:cout << "четыреста "; break;
		case 5:cout << "п€тьсот "; break;
		case 6:cout << "шестьсот "; break;
		case 7:cout << "семьсот "; break;
		case 8:cout << "восемьсот "; break;
		case 9:cout << "дев€тьсот "; break;
		}
		a = d % 100 / 10;
		if (a == 1 && a % 10 != 0) {
			a = d % 10;
			switch (a) {
			case 1:cout << "одиннадцать "; break;
			case 2:cout << "двенадцать " ; break;
			case 3:cout << "тринадцать " ; break;
			case 4:cout << "четырнадцать " ; break;
			case 5:cout << "п€тнадцать " ; break;
			case 6:cout << "шестнадцать " ; break;
			case 7:cout << "семнадцать " ; break;
			case 8:cout << "восемьнадцать " ; break;
			case 9:cout << "дев€тнадцать " ; break;
			}
		}
		else {
			switch (a) {
			case 1:cout << "дес€ть "; break;
			case 2:cout << "двадцать "; break;
			case 3:cout << "тридцать "; break;
			case 4:cout << "сорок "; break;
			case 5:cout << "п€тьдес€т "; break;
			case 6:cout << "шестьдес€т "; break;
			case 7:cout << "семьдес€т "; break;
			case 8:cout << "восемьдес€т "; break;
			case 9:cout << "дев€носто "; break;
			}
			a = d % 10;
			switch (a) {
			case 1:cout << "один "; break;
			case 2:cout << "два "; break;
			case 3:cout << "три "; break;
			case 4:cout << "четыре "; break;
			case 5:cout << "п€ть "; break;
			case 6:cout << "шесть "; break;
			case 7:cout << "семь "; break;
			case 8:cout << "восемь "; break;
			case 9:cout << "дев€ть "; break;
			}
		}
	}
	else {
		cout << "¬ведено некорректное значение!";
	}
	return 0;
}