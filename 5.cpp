/*
Программа должна уметь создавать прямые через коэффициэнты (ax+by+cz+d). Также программа должна 
определять пересекаются ли прямые, находятся ли они в любой плоскости, и лежит ли данная точка на прямой.
*/
#include "stdafx.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	// Первая прямая
	int a1, b1, c1, d1, a2, b2, c2, d2, x, y, z;
	cout << "Введите a1, b1, c1, d1, a2, b2, c2, d2 для первой прямой: " << endl;
	cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
	Line line1(a1, b1, c1, d1, a2, b2, c2, d2);
	while (line1.isset() == false)
	{
		cout << "Прямая не создана, повторите ввод: " << endl;
		cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
		line1.Set(a1, b1, c1, d1, a2, b2, c2, d2);
	}
	cout « "Введите X, Y, Z для первой прямой: " « endl;
	int x1, y1, z1;
	cin » x1 » y1 » z1;
	line1.SetXYZ(x1, y1, z1);

	// Вторая прямая
	cout << "Введите a1, b1, c1, d1, a2, b2, c2, d2 для второй прямой: " << endl;
	cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
	Line line2(a1, b1, c1, d1, a2, b2, c2, d2);
	while (line2.isset() == false)
	{
		cout << "Прямая не создана, повторите ввод: " << endl;
		cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
		line2.Set(a1, b1, c1, d1, a2, b2, c2, d2);
	}

	cout << "Прямые 1 и 2 " << (line1.intersection(line2) ? "пересекаются" : "не пересекаются") << endl;
	cout << "Прямые 1 и 2 " << (line1.intersection(line2) ? "лежат" : "не лежат") << " в одной плоскости" << endl;
	cout << "Точка A(0, 6, 2) " << (line1.pointOnLine(0, 6, 2) ? "лежит" : "не лежит") << " на прямой 1" << endl;

	cout << "Прямая 1:\n" << line1 << "Прямая 2:\n" << line2 << endl;

	system("pause");
	return 0;
}
