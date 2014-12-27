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
	int a1, b1, c1, d1, a2, b2, c2, d2;
	cout << "Ââåäèòå a1, b1, c1, d1, a2, b2, c2, d2 äëÿ ïåðâîé ïðÿìîé: " << endl;
	cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
	Line line1(a1, b1, c1, d1, a2, b2, c2, d2);
	while (line1.isset() == false)
	{
		cout << "Ïðÿìàÿ íå ñîçäàíà, ïîâòîðèòå ââîä: " << endl;
		cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
		line1.Set(a1, b1, c1, d1, a2, b2, c2, d2);
	}
	cout << "Ââåäèòå X, Y, Z äëÿ ïåðâîé ïðÿìîé: " << endl;
	int x, y, z;
	cin >> x >> y >> z;
	line1.SetXYZ(x, y, z);

	// Вторая прямая
	cout << "Ââåäèòå a1, b1, c1, d1, a2, b2, c2, d2 äëÿ âòîðîé ïðÿìîé: " << endl;
	cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
	Line line2(a1, b1, c1, d1, a2, b2, c2, d2);
	while (line2.isset() == false)
	{
		cout << "Ïðÿìàÿ íå ñîçäàíà, ïîâòîðèòå ââîä: " << endl;
		cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
		line2.Set(a1, b1, c1, d1, a2, b2, c2, d2);
	}
	cout << "Ââåäèòå X, Y, Z äëÿ âòîðîé ïðÿìîé: " << endl;
	cin >> x >> y >> z;
	line2.SetXYZ(x, y, z);

	cout << "Ïðÿìàÿ 1 è 2 " << (line1.intersection(line2) ? "ïåðåñåêàþòñÿ" : "íå ïåðåñåêàþòñÿ") << endl;
	cout << "Ïðÿìàÿ 1 è 2 " << (line1.intersection(line2) ? "ëåæàò" : "íå ëåæàò") << " â îäíîé ïëîñêîñòè" << endl;
	cout << "Òî÷êà A(0, 6, 2) " << (line1.pointOnLine(0, 6, 2) ? "ëåæèò" : "íå ëåæèò") << " íà ïðÿìîé 1" << endl;

	cout << "Ïðÿìàÿ 1:\n" << line1 << "Ïðÿìàÿ 2:\n" << line2 << endl;

	system("pause");
	return 0;
}
