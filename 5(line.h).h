//#include "stdafx.h"

class Line {
	friend std::ostream &operator<< (std::ostream &os, const Line &);

public:
	Line(int x, int y, int z, int vx, int vy, int vz);
	Line(const Line&);
	~Line();

	const Line &operator= (const Line &);
	
	bool isset() const;

	bool Set(int x, int y, int z, int vx, int vy, int vz);

	bool intersection(const Line&);
	bool coplanar(const Line&);
	bool parallel(const Line&);
	bool pointOnLine(int, int, int);

private:
	int X, Y, Z;
	int Vx, Vy, Vz;
	bool Initialized;
};
