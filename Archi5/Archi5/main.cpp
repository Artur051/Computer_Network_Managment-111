#include "line.h"
void main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;
	cout << "Enter a1:" << "\n";
	cin >> a;
	cout << "Enter b1:" << "\n";
	cin >> b;
	cout << "Enter c1:" << "\n";
	cin >> c;
	double d, f, g;
	cout << "Enter a2:" << "\n";
	cin >> d;
	cout << "Enter b2:" << "\n";
	cin >> f;
	cout << "Enter c2:" << "\n";
	cin >> g;
	exist sos(a, b, c, d, f, g);

	try
	{
		cout << sos.noexep() << "\n";
	}
	catch (...)
	{
		cout << "Произошло исключение в функции noexep" << endl;
	}
	try
	{
		cout << sos.with_throw() << "\n";
	}
	catch (...)
	{
		cout << "Произошло исключение в функции empty" << endl;
	}
	try
	{
		sos.invalid_throw();
	}
	catch (invalid_argument& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		sos.empty();
	}
	catch (empty_exeption)
	{
		cout << "Произошло исключение empty_exeption в функции " << endl;
	}
	try
	{
		sos.my_exp1();
	}
	catch (my_exeption1& e)
	{
		cout << e.message() << endl;
	}
	try
	{
		sos.my_exp2();
	}
	catch (my_exeption2& e)
	{
		cout << e.what() << " " << e.arg() << endl;
	}
}