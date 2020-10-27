#include "Fraction.h"
#include<iostream>
#include<string>

void Fraction::printFraction() {
    std::cout << numer_ << " / " << denom_ << std::endl;
}
int Fraction::gcd(int n, int m)
{
    return (m == 0) ? n : gcd(m, n % m);
}
Fraction::Fraction(int numerator, int denominator) : numer_(numerator), denom_(denominator)
{
    cnt++;
}
Fraction::Fraction() {
    numer_ = 0;
    denom_ = 0;
    cnt++;
}
Fraction::~Fraction()
{

}



int Fraction::getCnt()
{
    return cnt;
}

void Fraction::reduce()
{
    int divider = gcd(denom_, numer_);
    denom_ /= divider;
    numer_ /= divider;
}
int lcm(int a, int b)
{
    for (int i = 2; i <= std::min(a, b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            return i;
    }
    return 1;
}
void Fraction::prinitAsFraction(double fraction)
{
    int val = 100;
    fraction *= val;
    int divide = 0;
    bool isEmpty = true;
    while (isEmpty)
    {
        divide = lcm(fraction, 100);
        if (divide != 1)
        {
            fraction /= divide;
            val /= divide;
        }
        else
        {
            isEmpty = false;
        }
    }
    std::cout << fraction << " / " << val << std::endl;
}


void Fraction::setNumer(int num) {
    numer_ = num;
}
void Fraction::setDenom(int den) {
    denom_ = den;
}

Fraction Fraction::operator+(const Fraction& fractio)
{
    int _num = numer_ * fractio.denom_ + fractio.numer_ * denom_;
    int _div = denom_ * fractio.denom_;
    Fraction result(_num, _div);
    result.reduce();
    return result;
}
Fraction Fraction::operator-(const Fraction& fractio)
{
    int _num = numer_ * fractio.denom_ - fractio.numer_ * denom_;
    int _div = denom_ * fractio.denom_;
    Fraction result(_num, _div);
    result.reduce();
    return result;
}
Fraction Fraction::operator*(const Fraction& fractio)
{
    int _num = fractio.numer_ * numer_;
    int _div = fractio.denom_ * denom_;
    Fraction result(_num, _div);
    result.reduce();
    return result;
}
Fraction Fraction::operator/(const Fraction& fractio)
{
    int _num = numer_ * fractio.denom_;
    int _div = denom_ * fractio.numer_;
    Fraction result(_num, _div);
    result.reduce();
    return result;
}
std::ostream& operator<<(std::ostream& out, const Fraction& fract) {
    out << fract.numer_ << '/' << fract.denom_;
    return out;
}