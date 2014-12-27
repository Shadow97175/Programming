#include "stdafx.h"

class Line {
	friend std::ostream &operator<< (std::ostream &os, const Line &);

public:
	Line(int, int, int, int, int, int, int, int);
	Line(const Line&);
	~Line();

	const Line &operator= (const Line &);

	bool isset();
	bool SetXYZ(int, int, int);

	bool Set(int, int, int, int, int, int, int, int);

	bool intersection(const Line&);
	bool coplanar(const Line&);
	bool pointOnLine(int, int, int);

private:
	int a1, b1, c1, d1, a2, b2, c2, d2;
	int x, y, z;
	bool exist;
};
