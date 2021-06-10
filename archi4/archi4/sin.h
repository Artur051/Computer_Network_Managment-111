#pragma once
#include "func.h"
/*
* \breif Класс наследник синус
*/
class Sin : public func
{
private:
	/*
	* \breif параметры класса
	*/
	double x;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Sin(const double x) { this->x = x; }
	/*
	* \breif конструктор копирования по умолчанию
	*/
	Sin(Sin& other) = default;
	/*
	* \breif Деструктор по умолчанию
	*/
	~Sin() = default;
	/*
	* \breif перегруженный оператор вывода
	*/
	friend ostream& operator<<(ostream& os, const Sin& obj);
	/*
	* \breif функция вычисляющая геом. функцию синуса
	*/
	double function() const override;
	/*
	* \breif функция вычисляющая производную синуса
	*/
	double derivative() const override;
};
