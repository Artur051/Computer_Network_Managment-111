#pragma once
#include "func.h"
/*
* \breif Класс наследник косинус
*/
class Tan : public func
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
	Tan(const double x) { this->x = x; }
	/*
	* \breif конструктор копирования по умолчанию
	*/
	Tan(Tan& other) = default;
	/*
	* \breif Деструктор по умолчанию
	*/
	~Tan() = default;
	/*
	* \breif перегруженный оператор вывода
	*/
	friend ostream& operator<<(ostream& os, const Tan& obj);
	/*
	* \breif функция вычисляющая геом. функцию тангенса
	*/
	double function() const override;
	/*
	* \breif функция вычисляющая производную тангенса
	*/
	double derivative() const override;
};