﻿/* Написать классы Vector и Matrix для хранения и обработки одномерных и двумерных массивов, 
соответственно. 
Реализовать задание 2 лабораторной работы №1 с помощью созданных классов. 
Все функции оформить в виде методов классов. 
В коде отразить следующее:  Выделение 
и освобождение динамической памяти производить в конструкторах и деструкторах классов, 
соответственно.  В классе Vector перегрузить оператор индексации [].
В классе Matrix добавить методы T at(int i, int j) const и setAt(int i, int j, T val),
которые позволяют получить и установить значение элемента массива с индексом [i][j], 
T – это тип элементов массива по варианту (int или double). 
 Перегрузить операторы инкремента и декремента (как префиксного, так и постфиксного). 
Смысл инкремента / декремента всего массива заключается в инкременте / декременте каждого элемента массива.  
*/
#include<iostream>
#include"Vector.h"
#include"Matrix.h"



int main() {

	Vector v1(5);
	v1.print();
	v1++;
	v1.print();
	std::cout << v1.getSize() << std::endl;;
	v1.setElement(0, 7);
	v1.print();
	v1[1] = 5;
	v1.print();


	Matrix m1(5, 5);
	m1.initializationArray2D(4);
	m1--;
	m1.print();
	std::cout << std::endl;
	++m1;
	m1.print();
	std::cout << std::endl;
	++m1;
	m1.print();
	std::cout << std::endl;
	--m1;
	m1.print();
	std::cout << std::endl;
	m1--;
	m1.print();

	m1.setAt(0, 0, 13);
	m1.setAt(1, 1, 13);
	m1.setAt(3, 2, 13);
	m1.print();


	return 0;
}





