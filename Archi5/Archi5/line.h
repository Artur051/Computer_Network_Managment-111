#pragma once
#include "myexeption.h"
#include <cmath>
#include <ostream>
/*
* brief Структура для хранения коэф прямых;
*/
struct line
{
	double a;
	double b;
	double c;
	friend ostream& operator<<(ostream& os, const line& obj);
};
/*
* \brief Класса для определиния существуют ли прямые
*/
class exist
{
private:
	/*
	* brief две линии
	*/
	line first;
	line second;
public:
	/*
	* \brief конструктор принимающий две прямых
	*/
	exist(const double a, const double b, const double c, const double a2, const double b2, const double c2)
	{
		this->first.a = a;
		this->first.b = b;
		this->first.c = c;
		this->second.a = a2;
		this->second.b = b2;
		this->second.c = c2;
	}
	/*
	* \breif деструктор по умолчанию
	*/
	~exist() = default;
	/*
	* \breif геттеры прямых и d
	*/
	line get_line1() const;
	line get_line2() const;
	double get_d() const;
	/*
	* \breif функция сравнивающая double значения
	*/
	bool double_compare(const double value_a, const double value_b);
	/*
	* \brief оператор вывода
	*/
	friend ostream& operator<<(ostream& os, const exist& obj);
	/*
	* \brief Функция без спецификации исключений
	*/
	exist noexep() const;
	/*
	* \brief Функция со спецификацией throw();
	*/
	exist with_throw() throw();
	/*
	* \brief Функция с конкретной спецификацией с подходящим стандартным исключением
	*/
	exist invalid_throw() throw(invalid_argument);
	/*
	* \brief спецификация с собственным реализованным исключением: как пустой клас
	*/
	exist empty() throw(empty_exeption);
	/*
	* \brief спецификация с собственным реализованным исключением: как независимый класс с полями-параметрами функции
	*/
	exist my_exp1() throw(my_exeption1);
	/*
	* \brief спецификация с собственным реализованным исключением: как наследник от стандартного исключения с полями
	*/
	exist my_exp2() throw(my_exeption2);
};