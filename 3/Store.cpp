#include "Store.h"
#include<string>
#include<iostream>
#include <fstream>

Store::Store()
{
	name_ = "unnamed";
	address_ = "neuter";
	yearOfFoundation_ = "00.00.00";
	number_ = "";
	totalProfit_ = 0;
}

Store::Store(const std::string& name, const std::string& address,
	const std::string& yearOfFoundation, const std::string& number,
	const int& totalProfit) : name_(name),
	address_(address), yearOfFoundation_(yearOfFoundation),
	number_(number), totalProfit_(totalProfit)
{
}

Store::Store(const std::string& name) : name_(name) {

	address_ = "ne dom i ne ulica";
	yearOfFoundation_ = "12.12.2012";
	number_ = "";
	totalProfit_ = 0;
}


Store::~Store() {

}



void Store::setName(const std::string& name) {
	name_ = name;
}
void Store::setAddress(const std::string& address) {
	address_ = address;
}
void Store::setYearOfFoundation(const std::string& yearOfFoundation) {
	yearOfFoundation_ = yearOfFoundation;
}
void Store::setNumber(const std::string& number) {
	number_ = number;
}
void Store::setTotalProfit(const int& totalProfit) {
	totalProfit_ = totalProfit;
}



std::string Store::getName() const {
	return name_;
}
std::string Store::getAddress() const {
	return address_;
}
std::string Store::getYearOfFoundation() const {
	return yearOfFoundation_;
}
std::string Store::getNumber() const {
	return number_;
}
int Store::getTotalProfit() const {
	return totalProfit_;
}

void Store::N_MonthSales(int counMonth)
{
	int* income = new int[3]{0,0,0};
	int tempTotalProfit = 0;
	for (size_t i = 0; i < counMonth; i++)
	{
		tempTotalProfit += income[i] = 1 + rand() % 50000;
	}
	totalProfit_ += tempTotalProfit;
	middleIncom_ = tempTotalProfit / counMonth;
	
}

void Store::profitRatingList(Store stroe1, Store stroe2, Store stroe3)
{
	int length = 3;

	Store* allStore = new Store[length]{ stroe1 , stroe2, stroe3 };
	std::cout << "Общей прибылm" << std::endl;
	for (size_t i = 0; i < length-1; i++)
	{
		if (allStore[i].middleIncom_ > allStore[i + 1].middleIncom_)
		{
			Store temp = allStore[i];
			allStore[i] = allStore[i + 1];
			allStore[i + 1] = temp;
		}

	}
	for (size_t i = 0; i < length; i++)
	{
		std::cout << allStore[i].getName() << "   " << allStore[i].middleIncom_ << std::endl;
	}

	std::cout << "\n\n" << std::endl;
	std::cout << "Средняя прибыль" << std::endl;

	for (size_t i = 0; i < length-1 ; i++)
	{
		if (allStore[i].getTotalProfit() > allStore[i + 1].getTotalProfit())
		{
			Store temp = allStore[i];
			allStore[i] = allStore[i + 1];
			allStore[i + 1] = temp;
		}

	}
	for (size_t i = 0; i < length; i++)
	{
		std::cout << allStore[i].getName() << "   " << allStore[i].getTotalProfit() << std::endl;
	}

}
void Store::deserialize() {

	std::string line;
	std::ifstream in("../Store.txt"); // окрываем файл для чтения
	if (in.is_open())
	{
		int i = 0;
		while (getline(in, line))
		{
			if (i == 0)
			{
				name_ = line;
			}
			else if (i == 1) {
				address_ = line;

			}
			else if (i == 2) {
				yearOfFoundation_ = line;

			}
			else if (i == 3) {
				number_ = line;

			}
			else if (i == 4) {
				totalProfit_ = std::stoi(line);

			}
			else if (i == 5) {
				middleIncom_ = std::stoi(line);

			}
			i++;

		}
	}
	else
	{
		std::cout << "Такого файла не существует" << std::endl;
	}
	in.close();
}
void Store::serialize() {
	std::ofstream out;
	out.open("../Store.txt");
	if (out.is_open())
	{
		out << name_ << std::endl;
		out << address_ << std::endl;
		out << yearOfFoundation_ << std::endl;
		out << number_ << std::endl;
		out << totalProfit_ << std::endl;
		out << middleIncom_ << std::endl;
	}

}
void Store::deserialize(std::string filename) {
	std::string line;
	std::ifstream in(filename); // окрываем файл для чтения
	if (in.is_open())
	{
		int i = 0;
		while (getline(in, line))
		{
			if (i == 0)
			{
				name_ = line;
			}
			else if (i == 1) {
				address_ = line;

			}
			else if (i == 2) {
				yearOfFoundation_ = line;

			}
			else if (i == 3) {
				number_ = line;

			}
			else if (i == 4) {
				totalProfit_ = std::stoi(line);

			}
			else if (i == 5) {
				middleIncom_ = std::stoi(line);

			}
			i++;

		}
	}
	else
	{
		std::cout << "Такого файла не существует" << std::endl;
	}
	in.close();
}
void Store::serialize(std::string filename) {
	std::ofstream out;
	out.open(filename);
	if (out.is_open())
	{
		out << name_ << std::endl;
		out << address_ << std::endl;
		out << yearOfFoundation_ << std::endl;
		out << number_ << std::endl;
		out << totalProfit_ << std::endl;
		out << middleIncom_ << std::endl;
	}
}
