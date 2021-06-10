#pragma once
#include <iostream>
#include <ostream>
using namespace std;
/*
* \brief структура цены
*/
struct price
{
	int rub;
	int cop;
	friend	ostream& operator<<(std::ostream& os, const price& obj);
};
/*
* \breif структура даты
*/
struct date
{
	int days;
	int month;
	int years;
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
	int count;
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
	Goods(const string name, const int rub, const int cop, const int count, const int day, const int month, const int year);
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
	void change_price(const int rub, const int cop);
	/*
	* \breif cеттер количества товара
	*/
	void change_count(const int count);
	/*
	* \breif суммарная стоимость товара
	*/
	price sum_price() const;
	/*
	* \breif проверка даты на её правдоподобность
	*/
	bool real_date(const int day, const int month,const int year) const;

};