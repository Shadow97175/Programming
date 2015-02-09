#include "stdafx.h"

class Line {
	friend std::ostream &operator<< (std::ostream &os, const Line &);

public:
	Line(int);
	Line(const Line&);
	~Line();

	const Line &operator= (const Line &);

	bool isset();
	bool SetXYZ(int);

	bool Set(int);

	bool intersection(const Line&);
	bool coplanar(const Line&);
	bool pointOnLine(int);

private:
	int a1, b1, c1, m1, n1, p1, a2, b2, c2, m2, n2, p2;
	int x, y, z;
	bool exist;
};
