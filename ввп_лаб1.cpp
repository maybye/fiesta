#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	//task 1

	float a;
	float b;
	cout << "Введите значения сторон прямоугольника: " << endl; 
	cin >> a >> b;
	float S = a * b;
	float P = (a + b) * 2;
	cout << "Площадь: " << S << endl;
	cout << "Периметр: " << P << endl;

	//task 2

	double d;
	double π = 3.14;
	
	cout << "Введите значения диаметра окружности: " << endl;
	cin >> d;
	double L = π * d;
	cout << "Длина окружности: " << L << ' ' << "при диаметре " << d << endl;

	//task 3

	cout << "Введите значения a и b: " << endl;
	cin >> a >> b;
	float k = (a + b) / 2;
	cout << "Среднее арифметическое для чисел " << a << " и " << b << " : " << k << endl;

	//task 4
	float x;
	float y;
	cout << "Введите два ненулевых числа: " << endl;
	cin >> x >> y;
	float sum = (x * x) + (y * y);
	float dif = x * x - y * y;
	float multi = (x* x) * (y * y);
	float privat = (x * x) / (y * y);
	cout << "Сумма квадратов этих чисел: " << sum << endl;
	cout << "Разность квадратов этих чисел: " << dif << endl;
	cout << "Произведение квадратов этих чисел: " << multi << endl;
	cout << "Частное квадратов этих чисел: " << privat << endl;

	//task 5
	
	float c;
	float t;

	cout << "Введите два ненулевых числа: " << endl;
	cin >> c >> t;
	float sum1 = abs(c) + abs(t);
	float dif1 = abs(c) - abs(t);
	float multi1 = abs(c) * abs(t);
	float privat1 = abs(c) / abs(t);
	cout << "Сумма модулей этих чисел: " << sum1 << endl;
	cout << "Разность модулей этих чисел: " << dif1 << endl;
	cout << "Произведение модулей этих чисел: " << multi1 << endl;
	cout << "Частное модулей этих чисел: " << privat1 << endl;

}