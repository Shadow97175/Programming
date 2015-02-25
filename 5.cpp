#include <iostream>
#include "line.h"
using namespace std;

int main()
{
	setlocale(0, "Russian");

	// Первая прямая
	int x, y, z;
	int vx, vy, vz;
	cout << "Введите данные первой прямой" << endl;
	cout << "Введите коорадинаты точки принадлежащей прямой x, y, z:" << endl;
	cin >> x >> y >> z;
	cout << "Введите коорадинаты направляющего вектора vx, vy, vz:" << endl;
	cin >> vx >> vy >> vz;
	Line line1(x, y, z, vx, vy, vz);

	// Вторая прямая
	cout << "Введите данные второй прямой" << endl;
	cout << "Введите коорадинаты точки принадлежащей прямой x, y, z:" << endl;
	cin >> x >> y >> z;
	cout << "Введите коорадинаты направляющего вектора vx, vy, vz:" << endl;
	cin >> vx >> vy >> vz;
	Line line2(x, y, z, vx, vy, vz);

	// Точка
	cout << "Введите координаты точки x, y, z: " << endl;
	cin >> x >> y >> z;

	cout << "Прямая 1 и 2 " << (line1.intersection(line2) ? "пересекаются" : "не пересекаются") << endl;
	cout << "Прямая 1 и 2 " << (line1.coplanar(line2) ? "лежат" : "не лежат") << " в одной плоскости" << endl;
	cout << "Точка A(" << x << ", " << y << ", " << z << ") " << (line1.pointOnLine(x, y, z) ? "лежит" : "не лежит") << " на прямой 1" << endl;
	cout << "Прямая 1:\n" << line1 << "Прямая 2:\n" << line2 << endl;

	return 0;
}
