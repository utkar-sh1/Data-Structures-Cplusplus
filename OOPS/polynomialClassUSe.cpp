#include <iostream>
using namespace std;
#include "polynomialClass.cpp"
int main()
{
    polynomialClass d1;
    polynomialClass d2;
    polynomialClass d3;
    polynomialClass d4;
    polynomialClass d5;
    d1.setCoeff(1, 1);
    d1.setCoeff(3, 2);
    d1.setCoeff(5, -4);
    d1.print();
    d2.setCoeff(0, 4);
    d2.setCoeff(1, 2);
    d2.setCoeff(2, -3);
    d2.setCoeff(3, 1);
    d2.print();
    d3 = d1 + d2;
    d3.print();
    d4 = d1 - d2;
    d4.print();
    d5 = d2 * d1;
    d5.print();
    polynomialClass d6;
    d6=d3;
    d3.print();

    return 0;
}