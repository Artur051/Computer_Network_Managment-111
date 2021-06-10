#include "Vector3D.h"
Vector3D operator+(const Vector3D& A, const Vector3D& B)
{
	Vector3D temp(0, 0,0);
	temp.set_num1(A.get_num1() + B.get_num1());
	temp.set_num2(A.get_num2() + B.get_num2());
	temp.set_num3(A.get_num3() + B.get_num3());
	return temp;
}
double operator*(const Vector3D& A, const Vector3D& B)
{
	double temp;
	return temp = (A.get_num1() * B.get_num1()) + (A.get_num2() * B.get_num2()) + (A.get_num3() * B.get_num3());
}