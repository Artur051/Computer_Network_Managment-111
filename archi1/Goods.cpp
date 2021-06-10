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
		<< obj.cost << ";" << "\n" << "Количество товара: " << obj.count << "единиц;" << "\n" << "Номер накладной: " << obj.id << ";" << "\n" << "Сумма стоимости товара = " << obj.sum_price();
}
Goods::Goods(const string name, const int rub, const int cop, const int count, const int day, const int month, const int year)
{
	this->name = name;
	if (!(rub >= 0 && cop >= 0 && count >= 0)) throw ("Цена и количество не могут быть отрицательными!!!"); {
		this->cost.rub = rub;
		this->cost.cop = cop;
		this->count = count;
	}
	if (real_date(day, month, year)) {
		this->data.days = day;
		this->data.month = month;
		this->data.years = year;
	}
	number++;
	this->id = number;
}
void Goods::change_price(const int rub,const int cop)
{
	if (!(rub >= 0 && cop >= 0)) throw ("Цена не может быть отрицательной");
	this->cost.rub = rub;
	this->cost.cop = cop;
}
void Goods::change_count(const int count) 
{
	if (!(count >= 0)) throw ("Количество товара не может быть отрицательным");
	this->count = count;
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
bool Goods::real_date(const int day,const int month,const int year) const
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