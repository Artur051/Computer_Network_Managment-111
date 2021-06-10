#include "Sin.h"
ostream& operator<<(ostream& os, const Sin& obj)
{
	return os << "Значение функции = " << obj.function() << ";" << "\n" << "Значание производной =" << obj.derivative() << ";";
}
double Sin::function() const {	return sin(x); }
double Sin::derivative() const { return cos(x); }