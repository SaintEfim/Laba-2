#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdio>
#include <Windows.h>
#include <cmath>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position = { 0, 0 };
void screen_exit();
void screen1();
void screen2();
void screen3(int& A, int& B, int& C,bool& error);
void vivod(int& A, int& B, int& C, int X, int Y, int Z, int U,int& dokz, int& weight, int& height, bool& error);
void c_out(int X, int Y, int Z, int U);
void proverka_error(int& weight, int& height, bool& error);
void dokozatelstvo(int dokz);
void dd(int dokz);
int main()
{
	bool proverka = true;
	char chose;
	setlocale(LC_ALL, "rus");
	screen1();
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		screen2();
	}
	else if (chose == 27) {
		system("cls");
		screen_exit();
	}
	return 0;
}
void screen_exit()
{
	system("cls");
	int height = 7;
	int weight = 40;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Программа";
				else if (j == weight - 8) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 16) cout << "График";
				else if (j == weight - 5) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 9) cout << "Завершила свою работу";
				else if (j == weight - 20) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == weight) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 26)
				cout << "|";
			else if (j == 7) {
				cout << "Esc - Выход  Enter - Повтор";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	bool proverka = true;
	char chose;
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13)
	{
		system("cls");
		screen2();
	}
	else if (chose == 27)
	{
		system("cls");
		exit(0);
	}
}
void screen1()
{
	int height = 7;
	int weight = 45;

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}

	cout << "\n";

	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Программа";
				else if (j == weight - 8) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 16) cout << "График";
				else if (j == weight - 5) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Гр. 1092";
				else if (j == weight - 7) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == 8) cout << "Феденко Ефим Михайлович";
				else if (j == weight - 22) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 25)
				cout << "|";
			else if (j == 7) {
				cout << "Esc - Выход  Enter - Далее";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
}
void screen2()
{
	int A, B, C;
	int height = 7, weight = 45;
	bool error = true;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5 || i == 6) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 10) cout << "Введите числа A,B,C";
				else if (j == weight - 18) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "A=";
				else if (j == weight - 1) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "B=";
				else if (j == weight - 1) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "C=";
				else if (j == weight - 1) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	proverka_error(weight, height, error);
	cout << "\n";
		position = { 14, 4 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> A;
		position = { 14, 5 };
		SetConsoleCursorPosition(hConsole, position);
		cin >>B;
		position = { 14, 6 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> C;
	screen3(A,B,C,error);
}
void screen3(int& A, int& B, int& C, bool& error)
{
    int height = 7, weight = 45;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 0) {
				if (j == 0) cout << "|";
				else if (j == 12) cout<<"";
				else if (j == weight - -1) cout << "|";
				else cout << " ";
			}
			else if (i == 1) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << " ";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << " ";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << " ";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << " ";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}

	cout << "\n";
	int X=0, Y=0, Z=0, U=0;
	int dokz = 0;
	vivod(A, B, C,X,Y,Z,U,dokz,weight,height,error);
	c_out(X, Y, Z, U);
	cout << endl;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	dokozatelstvo(dokz);
	system("pause");
}
void vivod(int& A, int& B, int& C,int X,int Y,int Z,int U,int&dokz, int& weight, int& height, bool& error)
{
	if ((A + B + C) % 3 == 1) {
		X = A - B;
		Y = B - C;
		Z = A - C;
		if (pow((X + 2), 2) + pow(Y, 2) == pow(1, 2)) {
			U = X + Y + Z;
			dokz = 1;
		}
		else if (X > 0 && Y <= 2)
		{
			U = pow(X, 2) + pow(Y, 2) + pow(Z, 2);
			dokz = 2;
		}
		else {
			U = X * Y * Z;
			dokz = 3;
		}
		c_out(X, Y, Z, U);
	}
	else if ((A + B + C) % 3 == 2) {
		X = A + B;
		Y = B + C;
		Z = A + C;
		if (pow((X + 2), 2) + pow(Y, 2) == pow(1, 2)) {
			U = X + Y + Z;
			dokz = 1;
		}
		else if (X > 0 && Y <= 2)
		{
			U = pow(X, 2) + pow(Y, 2) + pow(Z, 2);
			dokz = 2;
		}
		else {
			U = X * Y * Z;
			dokz = 3;
		}
		c_out(X, Y, Z, U);
	}
	else if ((A + B + C) % 3 == 0) {
		X = A;
		Y = 2 * B;
		Z = 3 * C;
		if (pow((X + 2), 2) + pow(Y, 2) == pow(1, 2)) {
			U = X + Y + Z;
			dokz = 1;
		}
		else if (X > 0 && Y <= 2)
		{
			U = pow(X, 2) + pow(Y, 2) + pow(Z, 2);
			dokz = 2;
		}
		else {
			U = X * Y * Z;
			dokz = 3;
		}
		c_out(X, Y, Z, U);
	}
	else {
		error = false;
		position = { 0, 8 };
		SetConsoleCursorPosition(hConsole, position);
		proverka_error(weight, height, error);
		position = { 0, 10 };
		SetConsoleCursorPosition(hConsole, position);
		system("pause");
		system("cls");
		screen2();
	}
}
void c_out(int X, int Y, int Z, int U)
{
	position = { 12, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "X=" << X;
	position = { 12, 9 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Y=" << Y;
	position = { 12, 10 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Z=" << Z;
	position = { 12, 11 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "U=" << U;
}
void proverka_error(int& weight, int& height, bool& error)
{
	if (error == true)
	{
		for (int i = 0; i < 1; i++)
		{
			for (int j = 0; j <= weight; j++) {
				if (j == 0 || j == weight - 12)
					cout << "|";
				else if (j == 14) {
					cout << "Enter - Далее";
				}
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if (error == false) {
		for (int i = 0; i < 1; i++)
		{
			for (int j = 0; j <= weight; j++) {
				if (j == 0 || j == weight - 20)
					cout << "|";
				else if (j == 10) {
					cout << "Ошибка! Enter - Далее";
				}
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
}
void dokozatelstvo(int dokz)
{
	int height = 7;
	int weight = 45;
	position = { 0, 13 };
	SetConsoleCursorPosition(hConsole, position);
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 0)
				cout << "|";
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	dd(dokz);
	cout << endl << endl;
	system("pause");
	screen_exit();
}
void dd(int dokz)//сылка
{
	position = { 1, 13 };
	SetConsoleCursorPosition(hConsole, position);
	if (dokz == 1) {
		cout << "X,Y принадлежат D1. Вычислялось X+Y+Z";
	}
	else if (dokz == 2) {
		cout << "X,Y принадлежат D2. Вычислялось X^2+Y^2+Z^2";
	}
	else if (dokz == 3) {
		cout << "X,Y не принадлежат D1,D2. Вычислялось X*Y*Z";
	}
}