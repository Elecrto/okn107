#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int mon, day, sum, check;
	sum = 0;
	cout << "������� ����� � ����" << endl;
	cin >> mon >> day;
	if (1 <= mon && mon <= 12) {
		switch (mon) {
		case 1: check = 31; break;
		case 2: check = 28; break;
		case 3: check = 31; break;
		case 4: check = 30; break;
		case 5: check = 31; break;
		case 6: check = 30; break;
		case 7: check = 31; break;
		case 8: check = 31; break;
		case 9: check = 30; break;
		case 10: check = 31; break;
		case 11: check = 30; break;
		case 12: check = 31; break;
		}
		if (check < day || day < 0) {
			cout << "������! ��������� ��������� ������!";
			return 1;
		}
		else{
			switch (mon) {
			case 12: sum += 31;
			case 11: sum += 30;
			case 10: sum += 31;
			case 9: sum += 30;
			case 8: sum += 31;
			case 7: sum += 31;
			case 6: sum += 30;
			case 5: sum += 31;
			case 4: sum += 30;
			case 3: sum += 31;
			case 2: sum += 28;
			case 1: sum += 31; break;
			}
			day = check - day;
			cout << "�� ����� ����: " << 365 - (sum - day) << " ����";
		}
	}
	else {
		cout << "������! ��������� ��������� ������!";
	}
	return 0;
}