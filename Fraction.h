#pragma once
#include<string>
#include<iostream>
static int cnt;

class Fraction {

public:
	Fraction(int numerator, int denominator);
	Fraction();
	~Fraction();

	Fraction operator+(const Fraction& fraction);
	Fraction operator-(const Fraction& fraction);
	Fraction operator*(const Fraction& fraction);
	Fraction operator/(const Fraction& fraction);

	void setNumer(int num);
	void setDenom(int den);

	void reduce();
	void printFraction();

	static int getCnt();
	static int gcd(int n, int m);
	void prinitAsFraction(double decimal_fraction);
	friend std::ostream& operator<< (std::ostream& out, const Fraction& f);
	

private:
	int numer_;
	int denom_;


};

