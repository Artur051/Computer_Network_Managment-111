#include "tan.h"
ostream& operator<<(ostream& os, const Tan& obj)
{
	return os << "Значение функции = " << obj.function() << ";" << "\n" << "Значание производной =" << obj.derivative() << ";";
}
double Tan::function() const { return tan(x); }
double Tan::derivative() const { return (1/pow(cos(x),2)); }