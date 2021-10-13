/**
 *  Данный класс описывает сущность "деньги", у которой имеются следующие поля:
 *  Целая часть (рубли) - r и дробная (копейки) - c
 *  Данный класс имеет конструктор по умолчанию и параметрический, функция пересчета рублей и копеек-num,
 *  функция получения суммы в числовом виде-getNum
 *  операции по прибавлению, вычитанию, умножению и делению двух объектов класса Money, функцию сравнения денег- comp
 */
#ifndef Money_hpp
#define Money_hpp
#include <iostream>
 #include <string>
 #include <cstdlib>
 #include <string>
 #include <cmath>
 #include <clocale>
#include <stdio.h>
class Money {
public:
    long r;
    unsigned char c;
    Money();
    Money(long rub, unsigned char cop);
    void print();
    float num();
    void getNum(float n);
    void add(Money m);
    void sub(Money m);
    void div(Money m);
    void mul(Money m);
    void mul(float m);
    void div(float m);
    bool comp(Money m);
};
#endif
