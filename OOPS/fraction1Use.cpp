#include <iostream>

using namespace std;
#include "fraction1.cpp"
int main()
{
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    f1.print();
    //(f1+=f2)+=f2;
    f2.print();
    Fraction f3 = ++(++f1);

    f3.print();
    f1.print();
    /*
    Fraction f5=f1.multiply(f2);
    Fraction f6=f1*f2;
    Fraction f3=f1.add(f2);
    Fraction f4=f1+f2;
    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();
    f6.print();
    if(f1==f1)
    {
        cout<<"equal";
    }
    else
    {
        cout<<"Not equal";
    }
    */
    return 0;
}