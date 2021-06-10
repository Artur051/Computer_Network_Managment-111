#pragma once
#include <cmath>
#include <ostream>
using namespace std;
/*
* \breif виртуальный класс предок
*/
class func
{
private:
public:
	/*
	* \breif деструктор по умолчанию
	*/
	~func() = default;
	/*
	* \breif виртуальная функция вычисляющая значение геом. функции 
	*/
	virtual double function() const = 0;
	/*
	* \breif виртуальная функция с производной
	*/
	virtual double derivative() const = 0;
};