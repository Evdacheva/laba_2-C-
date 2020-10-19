/*Класс МАГАЗИН. Данные: название, адрес, год основания, номер, суммарная прибыль. 
Создать два объекта-магазина в куче и один в стеке. 
Данные первых двух заполнить с помощью сеттеров, а третий проинициализировать с помощью конструктора с параметрами. 
В главной функции проимитировать отдельно продажи за сентябрь, октябрь и ноябрь. 
Вывести все магазины отдельно в двух рейтинговых списках (сначала один, затем второй): 
1) отсортировать в порядке убывания общей прибыли за 3 месяца; 2) отсортировать в порядке убывания среднего прироста прибыли за 3 месяца. 
 */

#include <iostream>
#include <string>
#include "Store.h"
#include <ctime>
using namespace std;

//
int main() {

	srand(time(0));
	setlocale(0, "");
	Store* ATB = new Store();
	ATB->setName("ATB ");
	ATB->setAddress("Semashka Avenue 41b ");
	ATB->setYearOfFoundation("01.06.2001");
	ATB->setNumber("+3807494433");
	ATB->setTotalProfit(100000000);


	Store* Galaxy = new Store();
	Galaxy->setName("Galaxy ");
	Galaxy->setAddress(" 363 Chekhov ");
	Galaxy->setYearOfFoundation("17.02.2003");
	Galaxy->setNumber("380754543");
	Galaxy->setTotalProfit(500000000);

	Store Pyaterochka("Pyaterochka", "Shutova str 37", "13.05.2005", "+380502332232", 999999999);

	Galaxy->N_MonthSales(3);
	ATB ->N_MonthSales(3);
	Pyaterochka.N_MonthSales(3);

	Store result;
	result.profitRatingList(*Galaxy,*ATB, Pyaterochka);


	std::cout << std::endl;;

	ATB ->serialize();
	Pyaterochka.serialize();
	ATB->deserialize();

	std::cout << ATB->getName();

	return 0;
}