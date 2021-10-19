
#include "Money.hpp"

#include <cmath>
using namespace std;
Money::Money() {
    r = 0;
    c = 0;
}
Money::Money(int rub, int cop) {
    r = rub;
    c = cop;
}

float Money::num() {
    float res = r;
    if (r >= 0) {
        res += c / 100;
    }
    else {
        res -= c / 100;
    }
    return res;
}
void Money::setMoney(float n) {
    double i, f;
    f = modf(n, &i);
    r = i;
    c = f * 100;
}
void Money::add(Money m) {   //сложение двух сумм
    setMoney(m.num() + num());
}
void Money::sub(Money m) {   //вычитание
    setMoney(num() - m.num());
}

void Money::mul(float m) {   //умножение на число
    setMoney(m * num());
}
void Money::div(float m) {   //деление на число
    setMoney(num()/m);
}
bool Money::comp(Money m) {  //сравнение
    return (num() >= m.num());
}
void Money::setRub(int r){
    this->r=r;
}
void Money::setKop(int c){
    this->c=c;
}
int Money::getRub(){
    return r;
}
int Money::getKop(){
    return c;
}
