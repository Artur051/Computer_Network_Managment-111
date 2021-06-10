#include "line.h"
ostream& operator<<(ostream& os, const line& obj)
{
	return os << "(" << obj.a << "," << obj.b << "," << obj.c << ")";
}
ostream& operator<<(ostream& os, const exist& obj)
{
	return os << "(" << obj.first.a << "," << obj.first.b << "," << obj.first.c << ")" << " (" << obj.second.a << "," << obj.second.b << "," << obj.second.c << ")";
}
bool exist::double_compare(const double value_a, const double value_b)
{
	return abs(value_a - value_b) <= numeric_limits<double>::min();
}
 line exist::get_line1() const
{
	return first;
}
 line exist::get_line2() const
 {
	 return second;
 }
double exist::get_d() const
{
	return (first.a * second.b - second.a * first.b);
}
exist exist::noexep() const 
{
	exist temp(first.a, first.b, first.c, second.a, second.b, second.c);
	return  temp;
}
exist exist::with_throw() throw()
{
	return  noexep();
}
exist exist::invalid_throw() throw(invalid_argument)
{
	if (double_compare(get_d(),0))
		throw invalid_argument("Прямые не существуют");
	return noexep();
}
exist exist::empty() throw(empty_exeption)
{
	if (double_compare(get_d(), 0))
		throw empty_exeption();
	return noexep();
}
exist exist::my_exp1() throw(my_exeption1)
{
	if (double_compare(get_d(), 0))
		throw my_exeption1("Прямые не существуют");
	return noexep();
}
exist exist::my_exp2() throw(my_exeption2)
{
	if (double_compare(get_d(), 0))
		throw my_exeption2("выражение равно = ", get_d());
	return noexep();
}