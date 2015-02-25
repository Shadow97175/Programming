#include <iostream>
#include "line.h"

Line::Line(int x, int y, int z, int vx, int vy, int vz)
{
	Set(x, y, z, vx, vy, vz);
}

Line::Line(const Line& l)
{
	X=l.X;
	Y=l.Y;
	Z=l.Z;
	Vx=l.Vx;
	Vy=l.Vy;
	Vz=l.Vz;
}

Line::~Line()
{

}

bool Line::Set(int x, int y, int z, int vx, int vy, int vz)
{
	X=x;
	Y=y;
	Z=z;
	Vx=vx;
	Vy=vy;
	Vz=vz;
	Initialized = true;
	return true;
}

bool Line::isset() const
{
	return Initialized;
}

const Line &Line::operator= (const Line &l)
{
	if (&l != this)
	{
		X=l.X;
		Y=l.Y;
		Z=l.Z;
		Vx=l.Vx;
		Vy=l.Vy;
		Vz=l.Vz;
	}
	return *this;
}

bool Line::intersection(const Line& l)
{
	if (Vx == 0)
	{
		if (l.Vx == 0)
		{
			return X == l.X;
		}
		else
		{
			int t2 = (X-l.X)/l.Vx;
			if (Vy == 0)
			{
				return Y == l.Y + l.Vy * t2;
			}
			else
			{
				int t1=(l.Y + l.Vy*t2 - Y)/Vy;
				return Z+Vz*t1==l.Z+l.Vz*t2;
			}
		}
	}
	else
	{
		int d = l.Vy-Vy*l.Vx/Vx; 
		if (d==0)
		{
			return Y - l.Y + Vy*(l.X - X)/Vx == 0;
		}
		else
		{
			int t2 = (Y - l.Y + Vy*(l.X - X)/Vx)/d;
			int t1 = (l.X-X+l.Vx*t2)/Vx;
			return Z+Vz*t1==l.Z+l.Vz*t2;
		}
	}
}

bool Line::parallel(const Line& l)
{
	return (l.Vx*Vy == Vx*l.Vy) && (l.Vx*Vz != Vx*l.Vz) && (l.Vy*Vz != Vy*l.Vz) &&
			!pointOnLine(l.X,l.Y,l.Z);
}

bool Line::coplanar(const Line& l)
{
	return parallel(l) || intersection(l);
}

bool Line::pointOnLine(int x, int y, int z)
{
	return ((X - x)*Vy == (Y - y)*Vx) && ((X - x)*Vz == (Z - z)*Vx) && ((Y - y)*Vz == (Z - z)*Vy);
}

std::ostream &operator<< (std::ostream &os, const Line &l)
{
	if (l.isset())
	{
		os << "Прямая задана точкой (" << l.X << ", " << l.Y << ", " << l.Z
		   << ") и вектором (" << l.Vx << ", " << l.Vy << ", " << l.Vz << ")\n";
	}
	else
	{
		os << "Прямая не задана.\n";
	}
	return os;
}
