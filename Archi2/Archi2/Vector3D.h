#pragma once
#include "Triad.h"
/*
* \breif класс Vector3d (наследник)
*/
class Vector3D : public Triad
{
private:

public:
	/*
	* \breif конструктор с параметрами
	*/
	Vector3D(const double x, const double y, const double z) : Triad(x,y,z){}
	/*
	* \brief конструктор копирования
	*/
	Vector3D(Vector3D& these, Vector3D& other) : Triad(these,other){}
	/*
	* \breif деструктор по умолчанию
	*/
	~Vector3D() = default;
	/*
	* \breif опретор сложения векторов
	*/
	friend Vector3D operator+(const Vector3D& A, const Vector3D& B);
	/*
	* \breif оператор для нахождения скалярного произведения
	*/
	friend double operator*(const Vector3D& A, const Vector3D& B);
};