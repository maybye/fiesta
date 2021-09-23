#include <iostream>

using namespace std;

int main()
{
	//task 1

	int a;
	int b;
	cin >> a >> b;
	int S = a * b;
	int P = (a + b) * 2;
	cout << "Площадь: " << S << endl;
	cout << "Периметр: " << P << endl;
	
	//task 2

	float d;
	float π = 3.14;
	cin >> d;
	float L = π * d;
	cout << "Длина окружности: " << L << ' ' << "при диаметре " << d << endl;

	//task 3	 
	cin >> a >> b;
	int k = (a + b) / 2;
	cout << "Среднее арифметическое для чисел " << a << " и " << b << " : " << k << endl;

	//task 4

	cin >> a >> b;
	int sum = a * a + b * b;
	int dif = a * a - b * b;
	int multi = (a * a) * (b * b);
	int privat = (a * a) / (b * b);
	cout << sum << dif << multi << privat << endl;

}