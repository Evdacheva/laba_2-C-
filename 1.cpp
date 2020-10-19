/*  Написать класс Fraction для представления обыкновенных дробей 
(как отношения двух целых чисел x/y). 
Перегрузить операторы +, -, *, / для дробей.
Реализовать метод void reduce() для сокращения дроби,
а также статические методы:  int gcd(int n, int m) функция для нахождения наибольшего общего делителя чисел n и m; 
 void printAsFraction(double decimal_fraction)  void printAsFraction(char* decimal_fraction) 
перегруженные методы вывода десятичной дроби в виде 
обыкновенной (например, при значении decimal_fraction = 0.43 на экране должно вывестись 43/100, при 0.25 – 1/4 и т.д.).
Также реализовать в виде статического члена класса счетчик всех созданных на данный момент в программе экземпляров дробей.
Продемонстрировать работу созданного класса. Создать несколько объектов дробей. Произвести операции сложения, вычитания, умножения и деления дробей. 
Вывести на экран результаты. Показать также результаты работы статических методов класса. */
#include <iostream>
#include <string>
#include "Fraction.h"

int main() {

	Fraction test3;
	test3.prinitAsFraction(0.87);
	test3.prinitAsFraction(0.32);


	Fraction fraction1(540, 90);
	Fraction fraction2(120, 4);

	Fraction result = fraction1 - fraction2;
	result.printFraction();
	result.reduce();		    
	result.printFraction();


	return 0;
}