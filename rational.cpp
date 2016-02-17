#include <iostream>
#include "Rational.h"
using namespace std;

Rational::Rational() 
{
num = 0;
denom = 1;
}

Rational::Rational(int a, int b)
{
int large = a>b?a:b;
num = a;
denom = b;
int gcd= 1;
for(int i=large; i>=2; i--)
{
        if(num%i==0 && denom%i==0) {
        gcd = i; break; }
}
num = num/gcd;
denom = denom/gcd;
}
Rational Rational::operator+(Rational another)
{
    int local_num = num * another.denom + denom * another.num;
    int local_denom = denom * another.denom;
    return Rational(local_num,local_denom);
}
Rational Rational::operator-(Rational another)
{
    int local_num = num * another.denom - denom * another.num;
    int local_denom = denom * another.denom;
    return Rational(local_num,local_denom);
}
Rational Rational::operator*(Rational another)
{
    int local_num = num * another.num;
    int local_denom = denom * another.denom;
    return Rational(local_num,local_denom);
}
Rational Rational::operator/(Rational another)
{
    int local_num = num * another.denom;
    int local_denom = denom * another.num;
    return Rational(local_num,local_denom);
}
void Rational::output() const
{
     cout << num << "/" << denom;
}
int Rational::get_num() const
{
    return num;
}

int Rational::get_denom() const
{
    return denom;
}
