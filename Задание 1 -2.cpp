#include <iostream>
#include <string>
#include <cstdlib>
#include <string>
#include <cmath>
#include <clocale>
using namespace std;
class Money {
public:
    long r;
    unsigned char c;
    Money() {
        r = 0;
        c = 0;
    }
    Money(long rub, unsigned char cop) {
        r = rub;
        c = cop;
    }
    void print() {
        cout << r << "." << c << endl;
    }
    float num() {
        float res = r;
        if (r >= 0) {
            res += c / 100;
        }
        else {
            res -= c / 100;
        }
        return res;
    }
    void getNum(float n) {
        double i, f;
        f = modf(n, &i);
        r = i;
        c = f * 100;
    }
    void add(Money m) {   //сложение двух сумм
        getNum(m.num() + num());
    }
    void sub(Money m) {   //вычитание
        getNum(m.num() - num());
    }
    void div(Money m) {   //деление
        getNum(m.num() / num());
    }
    void mul(Money m) {   //умножение
        getNum(m.num() * num());
    }
    void mul(float m) {   //умножение на число
        getNum(m * num());
    }
    void div(float m) {   //деление на число
        getNum(m / num());
    }
    bool comp(Money m) {  //сравнение
        return (num() >= m.num());
    }
};
int main() {
    setlocale(LC_ALL, "Russian");
    return 0;
}



