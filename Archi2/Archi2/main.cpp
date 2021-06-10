#include "Triad.h"
#include "Vector3D.h"
#include <iostream>
void main()
{
	Triad a(2, 3, 4);
	a = a + 4;
	cout << a << "\n";
	a = a * 2;
	cout << a << "\n";
	Triad b(2, 3, 4);
	Triad c(2, 3, 4);
	bool bc = b == c;
	cout << bc << "\n";
	Vector3D z(2, 2, 2);
	Vector3D x(2, 2, 2);
	Vector3D v = z + x;
	cout << v << "\n";
	Triad h(a);
	cout << h << "\n";
	double zx = z * x;
	cout << zx << "\n";
	Vector3D k(z);
	cout << k << "\n";


}