#include "Goods.h"
ostream& operator<<(std::ostream& os, const price& obj)
{
	return os << obj.rub << "," << obj.cop;
}
ostream& operator<<(std::ostream& os, const date& obj)
{
	return os << obj.days << "." << obj.month << "." << obj.years;
}
ostream& operator<<(std::ostream& os, const Goods& obj)
{
	return os << "Наименование товара: " << obj.name << ";" <<"\n" <<"Дата оформления (" << obj.data << ");"<< "\n" << "Цена товара = "
		<< obj.cost << ";" << "\n" << "Количество товара: " << obj.count << " единиц;" << "\n" << "Номер накладной: " << obj.id << ";" << "\n" << "Сумма стоимости товара = " << obj.sum_price();
}
Goods::Goods(const string name, const unsigned int rub, const unsigned int cop, const unsigned int count, const unsigned int day, const unsigned int month, const unsigned int year)
{
	this->name = name;
	change_price(rub,cop);
	change_count(count);
	change_date(day, month, year);
	number++;
	this->id = number;
}
void Goods::change_price(const unsigned int rub,const unsigned int cop)
{
	this->cost.rub = rub;
	this->cost.cop = cop;
}
void Goods::change_count(const unsigned int count)
{
	this->count = count;
}
void Goods::change_date(const unsigned int day, const unsigned int month, const unsigned int year)
{
	if (real_date(day, month, year)) {
		this->data.days = day;
		this->data.month = month;
		this->data.years = year;
	}
}
price Goods::sum_price() const 
{
	price temp;
	temp.rub = cost.rub * count;
	temp.cop = cost.cop * count;
	if(temp.cop>=100)
	{
		while (temp.cop>100)
		{
			temp.cop = temp.cop -100;
			temp.rub = temp.rub + 1;
		}
	}
	return temp;
}
bool Goods::real_date(const unsigned int day,const unsigned int month,const unsigned int year) const
{
	if (day <= 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
		return true;
	}
	if (day <= 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
		return true;
	}
	if (day <= 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
		return true;
	}
	if (day <= 28 && (year % 400 != 0 || (year % 4 != 0 && year % 100 == 0))) {
		return true;
	}
	throw ("Дата не настоящая!");
	return false;
}

int Goods::number = 0;