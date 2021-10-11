#pragma once
#include <iostream>
#include <ostream>
using namespace std;
/*
* \brief структура цены
*/
struct price
{
	unsigned int rub;
	unsigned int cop;
	friend	ostream& operator<<(std::ostream& os, const price& obj);
};
/*
* \breif структура даты
*/
struct date
{
	unsigned int days;
	unsigned int month;
	unsigned int years;
	friend	ostream& operator<<(std::ostream& os, const date& obj);
};
/*
* \breif класс товар
*/
class Goods
{
private:
	/*
	* \brief переменные содержацие информацию о товаре
	*/
	string name;
	price cost;
	unsigned int count;
	date data;
	int id;
public:
	/*
	* \breif статическая переменная для генерации номера накладной
	*/
	static int number;
	/*
	* \breif коструктор с параметрами
	*/
	Goods(const string name, const unsigned int rub, unsigned const int cop, const unsigned int count, const unsigned int day, const unsigned int month, const unsigned int year);
	/*
	* \breif конструктор копирования
	*/
	Goods(Goods& other) = default;
	/*
	* \breif диструктор по умолчанию
	*/
	~Goods() = default;
	/*
	* \breif дружественная функция для вывода общей информации
	*/
	friend	ostream& operator<<(std::ostream& os, const Goods& obj);
	/*
	* \breif сеттер цены
	*/
	void change_price(const unsigned int rub, const unsigned int cop);
	/*
	* \breif cеттер количества товара
	*/
	void change_count(const unsigned int count);
	/*
	* \brief сеттер даты
	*/
	void change_date(const unsigned int day, const unsigned int month, const unsigned int year);
	/*
	* \breif суммарная стоимость товара
	*/
	price sum_price() const;
	/*
	* \breif проверка даты на её правдоподобность
	*/
	bool real_date(const unsigned int day, const unsigned int month,const unsigned int year) const;

};