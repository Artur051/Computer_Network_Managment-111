#include "cos.h"
ostream& operator<<(ostream& os, const Cos& obj)
{
	return os << "Значение функции = " << obj.function() << ";" << "\n" << "Значание производной =" << obj.derivative() << ";";
}
double Cos::function() const { return cos(x); }
double Cos::derivative() const { return -sin(x); }