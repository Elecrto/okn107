#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct man {
	char name[50];
	int age;
	int group;
};

int count_of_men(ifstream& fin) {
	int count = 0;
	while (!fin.eof()) {
		string tmp;
		getline(fin, tmp);
		count++;
	}
	return count;
}

int find_null(char* name) {
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] == ' ') {
			return i;
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	ifstream fin("man.dat");
	ofstream fout("man_out.dat");
	if (!fin.is_open() || !fout.is_open()) {
		cout << "error" << endl;
		return 1;
	}
	man A = { "Oleg ", 18, 1};
	char tmp[10];
	fout.write((const char*)&A.name, sizeof(char) * (find_null(A.name)));
	fout.write(" ", sizeof(char));
	_itoa_s(A.age, tmp, 10);//Возраст(число) в строку
	fout.write((const char*)&tmp, sizeof(char) * (find_null(tmp)));
	fout.write(" ", sizeof(char));
	_itoa_s(A.group, tmp, 10);
	fout.write((const char*)&tmp, sizeof(char) * (find_null(tmp)));
	fout.write("\n", sizeof(char));
	//fin.seekg(0, ios_base::end);
	//int x = fin.tellg();
	//int count = count_of_men(x);
	//fin.seekg(0, ios_base::beg);
	//cout << count;
	int count = count_of_men(fin);
	cout << count;
	while (fin.eof()) {
		return 0;
	}
	fout.close();
	fin.close();
}