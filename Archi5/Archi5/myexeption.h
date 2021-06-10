#pragma once
#include <iostream>
using namespace std;
/*
* \brief Пустой класс
*/
class empty_exeption {};
/*
* \brief Класс с полями параметрами для исключения
*/
class my_exeption1
{
private:
    string msg;
public:
    my_exeption1(const string& s)
    {
        this->msg = s;
    }
    string message() const;
};
/*
* \brief Класс наследник от стандартного исключения с полями
*/
class my_exeption2 : public invalid_argument
{
private:
    double num;
public:
    my_exeption2(const string msg, double n) : invalid_argument(msg), num(n) {}
    double arg() const;
};