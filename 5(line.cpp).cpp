#include <iostream>

Line::Line(int a1, b1, c1, m1, n1, p1)
{
	Set(a1, b1, c1, m1, n1, p1);
}

Line::Line(const Line& l)
{

	*this = a1=l.a1, b1=l.b1, c1=l.c1, m1=l.m1, n1=l.n1, p1=l.p1;
}

Line::~Line()
{

}

bool Line::Set(int a1, b1, c1, m1, n1, p1)
{

}

bool Line::isset()
{
	return exist;
}

bool Line::SetXYZ(int x, y, z)
{
	if (exist)
	{
		this->x = x;	this->y = y;	this->z = z;
		return true;
	}
	return false;
}

const Line &Line::operator= (const Line &l)
{
	if (&l != this)
	{
		if (exist)
		{
			this->a1 = l.a1; this->b1 = l.b1; this->c1 = l.c1; this->m1 = l.m1; this->n1 = l.n1; this->p1 = l.p1;
			exist = true;
		}
	}
	return *this;
}

bool Line::intersection(const Line& l)
{
	return (this.coplanar(l) && (m1*l.n1-n1*l.m1 != 0 || m1*l.p1-p1*l.m1 != 0 || n1*l.p1-p1*l.n1 != 0)) ? true : false;
}

bool Line::coplanar(const Line& l)
{
	return (((l.a1 - a1) * n1 * l.p1 + (l.b1 - b1) * p1 * l.m1 + (l.c1 - c1) * m1 * l.n1 - (l.c1 - c1) * n1 * l.m1 + (l.a1 - a1) * p1 * l.n1 + (l.b1 - b1) * m1 * l.p1) == 0) ? true : false;
} 

bool Line::pointOnLine(int x, y, z)
{
	return (((x-a1)*n1 == (y-b1)*m1) && ((y-b1)*p1 == (z-c1)*n1) && ((x-a1)*p1 == (z-c1)*m1)) ? true : false;
}
