#include "stdafx.h"

Line::Line(int a1, int b1, int c1, int d1, int a2, int b2, int c2, int d2)
{
	Set(a1, b1, c1, d1, a2, b2, c2, d2);
}

Line::Line(const Line& l)
{
	*this = l;
}

Line::~Line()
{

}

bool Line::Set(int a1, int b1, int c1, int d1, int a2, int b2, int c2, int d2)
{
	double r1 = (double)a1 / (double)a2;
	double r2 = (double)b1 / (double)b2;
	double r3 = (double)c1 / (double)c2;
	if ((a1 * a2 + b1 * b2 + c1 * c2) == 0 && (r1 != r2 || r2 != r3))
	{
		this->a1 = a1;	this->b1 = b1;	this->c1 = c1;	this->d1 = d1;
		this->a2 = a2;	this->b2 = b2;	this->c2 = c2;	this->d2 = d2;
		exist = true;
		return true;
	}
	return false;
}

bool Line::isset()
{
	return exist;
}

bool Line::SetXYZ(int x, int y, int z)
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
			this->a1 = l.a1;	this->b1 = l.b1;	this->c1 = l.c1;	this->d1 = l.d1;
			this->a2 = l.a2;	this->b2 = l.b2;	this->c2 = l.c2;	this->d2 = l.d2;
			exist = true;
		}
	}
	return *this;
}

bool Line::intersection(const Line& l)
{
	return (this->x == l.x && this->y == l.y && this->z == l.z) ? true : false;
}

bool Line::coplanar(const Line& l)
{
	return ((this->x == l.x && this->y == l.y) || (this->x == l.x && this->z == l.z) || (this->y == l.y && this->z == l.z));
}

bool Line::pointOnLine(int x, int y, int z)
{
	return (this->x == x && this->y == y && this->z == z) ? true : false;
}

std::ostream &operator<< (std::ostream &os, const Line &l)
{
	if (l.exist)
	{
		os << "a1: " << l.a1 << ", b1: " << l.b1 << ", c1: " << l.c1 << ", d1: " << l.d1 << "\n";
		os << "a2: " << l.a2 << ", b2: " << l.b2 << ", c2: " << l.c2 << ", d2: " << l.d2 << "\n";
		os << "X: " << l.x << ", Y: " << l.y << ", Z: " << l.z << "\n";
	}
	else
	{
		os << "Ïðÿìàÿ íå çàäàíà.\n";
	}
	return os;
}
