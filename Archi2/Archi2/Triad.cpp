#include "Triad.h"
Triad operator+(const Triad& these, const double num)
{
	Triad temp(0, 0, 0);
	temp.num1 = these.num1 + num;
	temp.num2 = these.num2 + num;
	temp.num3 = these.num3 + num;
	return temp;

}
Triad operator*(const Triad& these, const double num)
{
	Triad temp(0, 0, 0);
	temp.num1 = these.num1 * num;
	temp.num2 = these.num2 * num;
	temp.num3 = these.num3 * num;
	return temp;
}
bool operator==(const Triad& these, const Triad& other)
{
	return (abs(these.num1 - other.num1) <= numeric_limits<double>::min()) 
		&& (abs(these.num2 - other.num2) <= numeric_limits<double>::min()) 
		&& (abs(these.num3 - other.num3) <= numeric_limits<double>::min());
}
ostream& operator<<(ostream& os, const Triad& obj)
{
	return os << obj.num1 << "," << obj.num2 << "," << obj.num3;
}
double Triad::get_num1() const { return num1; }
double Triad::get_num2() const { return num2; }
double Triad::get_num3() const { return num3; }