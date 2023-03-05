// sortic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>
#include <windows.h> 
#include "fun.h"

using namespace std;

 void itc_vec(const vector <int>& mass) {
	for (int p = 0; p < mass.size(); p++) {
		cout << endl << mass[p] << " ";
	}
}


int main() {
	int ch;
	string r = " ";
	vector <int> a = {};
	vector <int> b = {};
	vector <int> c = {};
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for(int d = 0;r != "!"; d++)
	{
		cin >> r;
		if (r != "!") {
			ch = itc_strint(r);
		}
		else
			;
		a.push_back(ch);

	}
	a.pop_back();
	int len = a.size();
	for (int u = 0; u < len ; u++) {
		for (int e = 0; a[0] != itc_min(a); e++) {
				itc_ra(a);
				SetConsoleTextAttribute(hConsole, 5);
				cout << "ra" << endl;
			}
			itc_pb(a, b);
			SetConsoleTextAttribute(hConsole, 2);
			cout  << "pb" << endl;
			c = {};
			itc_per(a, c);
	}
	int len1 = b.size();
	for (int i = 0; i < len1; i++) {
		itc_pa(b, a);
			SetConsoleTextAttribute(hConsole, 11);
			cout << "pa" << endl;
	}

	SetConsoleTextAttribute(hConsole, 7);
	cout << "vector a";
	itc_vec(a);
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
