

#include "Money.hpp"
#include <iostream>
using namespace std;
 int main() {
     setlocale(LC_ALL,"Russian");
     cout<<"Введите количество рублей и копеек!"<<endl;
     int r,kop;
     cin>>r>>kop;
     Money m(r,kop);
     cout<<"Сумма денег: "<<endl;
     cout<<m.num()<<endl;
     return 0;
 }
