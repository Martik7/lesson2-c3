#include <iostream>
#include <Windows.h>
using namespace std;

const float n = 3.14;

//1
bool IsUpper(char c)
{
	if (c>='A' && c <= 'Z')
		return true;
	else
		return false;
} 
//2
float Ploshad(float a, float h)
{
	return a * a * h * 3.14;
}
//3
char compair(int a, int b)
{
	if (a > b) return '>';
	else if (a < b) return '<';
	else return '=';
}
//4
float func(float R1, float R2, char type)
{
	if (type == 'p')
		return(R1 - R2) / (R1 + R2);
	else if (type == 'c')
		return R1 + R2;
	else
		return -1;
}
//5
int factorial(int a, int b, int c, int d)
{
	return a * b * c * d;
}
//6
int Dohod(int velichina, int procent, int srok)
{
	return velichina * procent * srok;
}
//7
bool glasn(char a)
{
	char g[7] = { 'А','И', 'О', 'Е', 'Ю', 'У', 'Я' };
	if (a == g[7])
		return true;
	else
		return false;
}
//8
void stroka(int dlina, char c)
{
	while (dlina != 0)
	{
		--dlina;
		cout << c;
	}
	cout << '\n';
}
//9
int Sparallepiped(int a, int b, int c) //Площадь
{
	return 2 * (a*b + b * c + a * c);
}
int Vparallepiped(int a, int b, int c) //Объем
{
	return a * b*c;
}
//10
void frame(int x, int y, int cx, int cy)
{
	while (y--)
		cout << endl;
	int n = cy - 1;
	while (cy--)
	{
		for (size_t i = 0; i <= x+cx; i++)
		{
			if ((cy == n && i >= x) || (!cy && i >= x) || i == x || i == x + cx)
				cout.put((char)219);
			else
				cout.put(' ');
		}
		cout << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
	Написать функцию, которая вычисляет объем цилиндра. 
	Параметрами функции должны быть радиус и высота цилиндра. 
	*/

	/*
	Написать функцию, которая возвращает максимальное из двух целых чисел,
	полученных в качестве аргумента. 
	*/

	/*char c;
	cout << "vvedite symbol: ";
	cin >> c;
	cout << IsUpper(c) << endl;*/

	/*int a = 5, h = 4;
	cout << Ploshad(a,h) << endl;*/

	/*int a = 3, b = 4;
	cout << compair(a, b) << endl;*/

	/*int R1 = 10, R2 = 5;
	cout << func(R1, R2, 'p') << endl;*/

	/*
	Написать функцию "Факториал" и программу,
	использующую эту функцию для вывода таблицы факториалов. 
	*/

	/*int a = 3, b = 4, c = 5, d = 6;
	cout << factorial(a,b,c,d) << endl;*/

	/*
	Написать функцию Dohod, 
	которая вычисляет доход по вкладу.
	Исходными данными для функции являются: 
	величина вклада, 
	процентная ставка (годовых) 
	и срок вклада (количество дней). 
	*/

	/*int velichina, procent, srok;
	cout << "Введите величину: " << endl;
	cin >> velichina;
	cout << "Введите процентную ставку: " << endl;
	cin >> procent;
	cout << "Введите срок: " << endl;
	cin >> srok;

	cout << Dohod(velichina, procent, srok) << endl;*/

	/*
	Написать функцию glasn, 
	которая возвращает 1,
	если символ, 
	полученный функцией в качестве аргумента,
	является гласной буквой русского алфавита, 
	и ноль — в противном случае. 
	*/

	/*char a;
	cout << "vvedite symbol: ";
	cin >> a;
	cout << glasn(a) <<endl;*/

	/*
	Написать функцию, которая выводит строку,
	состоящую из одинаковых символов. 
	Длина строки и символ являются параметрами функции. 
	*/
	
	/*
*int dlina = 40;
	stroka(dlina, 'A');*/

	/*
	Написать функцию, 
	которая вычисляет объем и площадь поверхности параллелепипеда. 
	*/

	/*int a = 5, b = 3, c = 2;
	cout << Sparallepiped(a, b, c) << endl;
	cout << Vparallepiped(a, b, c) << endl;*/
	
	/*
	Написать функцию frame, 
	которая выводит на экран рамку. 
	В качестве параметров функции должны передаваться координаты левого верхнего угла и размер рамки.
	*/

	/*frame(3, 5, 10, 15);
	*/


	system("pause");
	return 0;
}