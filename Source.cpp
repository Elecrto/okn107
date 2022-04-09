#include<iostream>
#include<string>
using namespace std;

struct elem {
	char value;
	elem* next = nullptr;
};

void push(elem*& stack, char value) {
	elem* newel = new elem;
	newel->value = value;
	newel->next = stack;
	stack = newel;
}

bool pop(elem*& stack, char& value) {
	if (!stack) { return false; }
	value = stack->value;
	stack = stack->next;
	return true;
}

void clear(elem*& stack) {
	if (!stack) { return; }
	elem* newel = stack->next;
	delete stack;
	clear(newel);
}

char* peek(elem* stack) {
	if (!stack) return nullptr;
	return &stack->value;
}

void Task(elem*& stack, string str) {
	elem* stack1 = stack;
	string close = ")]}>";
	string open = "([{<";
	char val;
	int c = 0;
	for (int i = 0; i < str.length(); i++) {
		if (close.find(str[i]) != -1 &&  peek(stack)==nullptr) {
			cout << "Выражение не имеет смыла, ошибка в "<<i<<" скобке";
			return;
		}
		if (open.find(str[i]) != -1) {
			val = str[i];
			push(stack, val);
			c++;
		}
		else if (close.find(str[i]) != -1 && open.find(stack->value) == close.find(str[i])) {
			pop(stack, val);
			c++;
		}
	}
	if (peek(stack) == nullptr) {
		cout << "Выражение верно";
		return;
	}
	else { cout << "Выражение не имеет смысла, ошибка в "<<c << " скобке"; }
}

int main() {
	setlocale(LC_ALL, "ru");
	elem* Stack = nullptr;
	string str0 = "()({[[}})";
	string str1 = "[{([[[<>]] ] )(<>)() {}}]";//true
	string str2 = "]()(){<>} [[()]]";//false
	string str3 = "[(sjd), '2'], {2:3}, [<>]";//true
	string str4 = "{[[[[((()))]]<]()()>]}";//false
	Task(Stack, str1);
	clear(Stack);
}