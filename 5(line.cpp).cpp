#include <iostream>

Line::Line(int a1, b1, c1, m1, n1, p1, a2, b2, c2, m2, n2, p2)
{
	Set(a1, b1, c1, m1, n1, p1, a2, b2, c2, m2, n2, p2);
}

Line::Line(const Line& l)
{

	*this = l;
}
Line::~Line()
{

}

bool Line::Set(int a1, b1, c1, m1, n1, p1, a2, b2, c2, m2, n2, p2)
{
		if ((x-a1)/m1) == ((y-b1)/n1)) == ((z-c1)/p1)
	{
		this->a1 = a1; this->b1 = b1; this->c1 = c1; this->m1 = m1; this->n1 = n1; this->p1 = p1;
		this->a2 = a2; this->b2 = b2; this->c2 = c2; this->m2 = m2; this->n2 = n2; this->p2 = p2;
		exist = true;
		return true;
	}
	return false;
}

bool Line::isset()
{
	return exist;
}

bool Line::SetXYZ(int x, y, z)
{
	if (exist)
	{
	this->x = x; this->y = y; this->z = z;
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
			this->a2 = l.a2; this->b2 = l.b2; this->c2 = l.c2; this->m2 = l.m2; this->n2 = l.n2; this->p2 = l.p2;
			exist = true;
		}
	}
	return *this;
}

bool Line::intersection(const Line& l)

{
	return (this.coplanar(l) && (m1/m2) == (n1/n2) && (n1/n2) == (p1/p2) && (m1/m2) == (p1/p2)) ? false : true;
}

bool Line::coplanar(const Line& l)
{
	return (((a2 - a1) * n1 * p2 + (b2 - b1) * p1 * m2 + (c2 - c1) * m1 * n2 - (c2 - c1) * n1 * m2 + (a2 - a1) * p1 * n2 + (b2 - b1) * m1 * p2) == 0) ? true : false;
} 

bool Line::pointOnLine(int x, y, z)
{
	return (this->x == x && this->y == y && this->z == z) ? true : false;
}

std::ostream &operator<< (std::ostream &os, const Line &l)
{
	if (l.exist)
	{
		os << "a1: " << l.a1 << ", b1: " << l.b1 << ", c1: " << l.c1 << ", m1: " << l.m1 << ", n1: " << l.n1 << ", p1: " << l.p1 << "\n";
		os << "a2: " << l.a2 << ", b2: " << l.b2 << ", c2: " << l.c2 << ", m2: " << l.m2 << ", n2: " << l.n2 << ", p2: " << l.p2 << "\n";
		os << "X: " << l.x << ", Y: " << l.y << ", Z: " << l.z << "\n";
	}
	else
	{
	os << "Прямая не задана.\n";
	}
	return os;
}
