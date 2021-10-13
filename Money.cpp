
#include "Money.hpp"
using namespace std;
Money::Money() {
    r = 0;
    c = 0;
}
Money::Money(long rub, unsigned char cop) {
    r = rub;
    c = cop;
}
void Money::print() {
    cout << r << "." << c << endl;
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
void Money::getNum(float n) {
    double i, f;
    f = modf(n, &i);
    r = i;
    c = f * 100;
}
void Money::add(Money m) {   //сложение двух сумм
    getNum(m.num() + num());
}
void Money::sub(Money m) {   //вычитание
    getNum(m.num() - num());
}
void Money::div(Money m) {   //деление
    getNum(m.num() / num());
}
void Money::mul(Money m) {   //умножение
    getNum(m.num() * num());
}
void Money::mul(float m) {   //умножение на число
    getNum(m * num());
}
void Money::div(float m) {   //деление на число
    getNum(m / num());
}
bool Money::comp(Money m) {  //сравнение
    return (num() >= m.num());
}
