#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int mon, day, sum, check;
	sum = 0;
	cout << "Введите месяц и день" << endl;
	cin >> mon >> day;
	if (1 <= mon && mon <= 12) {
		switch (mon) {
		case 1: check = 31; break;
		case 2: check = 28; break;
		case 3: check = 31; break;
		case 4: check = 30; break;
		case 5: check =  31; break;
		case 6: check = 30; break;
		case 7: check = 31; break;
		case 8: check = 31; break;
		case 9: check = 30; break;
		case 10: check = 31; break;
		case 11: check = 30; break;
		case 12: check = 31; break;
		}
		if (check < day || day < 0) {
			cout << "Ошибка!";
		}
		else if (day >=1 && day <= 31){
			switch (mon) {
			case 1: sum += 31; break;
			case 2: sum += 31 + 28; break;
			case 3: sum += 31 + 28 + 31; break;
			case 4: sum += 31 + 28 + 31 + 30; break;
			case 5: sum += 31 + 28 + 31 + 30 + 31; break;
			case 6: sum += 31 + 28 + 31 + 30 + 31 + 30; break;
			case 7: sum += 31 + 28 + 31 + 30 + 31 + 30 + 31; break;
			case 8: sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break;
			case 9: sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
			case 10: sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
			case 11: sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
			case 12: sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31; break;
			}
			day = check - day;
			cout << "До Новго Года: " << 365 - (sum - day) << " дней";
		}
	}
	else {
		cout << "Ошибка!";
	}
	return 0;

}