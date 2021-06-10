#pragma once
#include <string>
#include <ostream>
using namespace std;
/*
* \breif класс Триада
*/
class Triad
{
private:
	/*
	* \breif числа в триаде
	*/
	double num1;
	double num2;
	double num3;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Triad(const double num1, const double num2,const double num3)
	{
		this->num1 = num1;
		this->num2 = num2;
		this->num3 = num3;
	}
	/*
	* \breif конструктор копирования
	*/
	Triad(Triad& these, Triad& other){}
	/*
	* \breif деструктор по умочанию
	*/
	~Triad() = default;
	/*
	* \breif перегрузка прибавляющая ко всем числам триады число
	*/
	friend Triad operator+(const Triad& these, const double num);
	/*
	* \breif перегрузка умножающая все числам триады число
	*/
	friend Triad operator*(const Triad& these, const double num);
	/*
	* \breif перегрузка сравнивающая триады
	*/
	friend bool operator==(const Triad& these, const Triad& other);
	/*
	* \breif общая информация о триаде
	*/
	friend ostream& operator<<(ostream& os, const Triad& obj);
	/*
	* \breif сеттеры чисел
	*/
	void set_num1(const double num) { this->num1 = num; };
	void set_num2(const double num) { this->num2 = num; };
	void set_num3(const double num) { this->num3 = num; };
	/*
	* \breif геттеры чисел
	*/
	double get_num1() const;
	double get_num2() const;
	double get_num3() const;
protected:
	/*
	* \breif конструкто по умолчанию
	*/
	Triad() = default;
};