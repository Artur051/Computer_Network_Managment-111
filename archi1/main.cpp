#include "Goods.h"
void main() 
{
	setlocale(LC_ALL, "ru");
	Goods first("имя", 10, 60, 2, 28, 2, 2001);
	cout << first.sum_price()<< "\n";
	first.change_count(5);
	first.change_price(20, 50);
	cout << first;
}