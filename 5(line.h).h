#include "stdafx.h"

class Line {
	friend std::ostream &operator<< (std::ostream &os, const Line &);

public:
	Line(int);
	Line(const Line&);
	~Line();

	const Line &operator= (const Line &);

	bool isset();

	bool Set(int);

	bool intersection(const Line&);
	bool coplanar(const Line&);
	bool pointOnLine(int, int, int);

private:
	int a1, b1, c1, d1, a2, b2, c2, d2;
	bool exist;
};
