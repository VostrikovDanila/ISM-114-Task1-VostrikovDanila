/**
 *ДОКУМЕНТАЦИЯ
 *  Данный класс описывает сущность "деньги", у которой имеются следующие поля:
 *  Целая часть (рубли) - r и дробная (копейки) - c
 *  Данный класс имеет конструктор по умолчанию и параметрический, функция пересчета рублей и копеек-num,
 *  функция получения суммы в числовом виде-getNum
 *  операции по прибавлению, вычитанию, умножению и делению двух объектов класса Money, функцию сравнения денег- comp
 */
#pragma once
class Money {
private:
    int r;
    int c;
public:
    Money();
    Money(int rub, int cop);
    float num();
    void setMoney(float n);
    void add(Money m);
    void sub(Money m);
    void mul(float m);
    void div(float m);
    bool comp(Money m);
    int getRub();
    int getKop();
    void setRub(int r);
    void setKop(int k);
};

