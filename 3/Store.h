#pragma once
#include<iostream>

class Store
{
public:
	Store();
	Store(const std::string& name, const std::string& address,
		const std::string& yearOfFoundation, const std::string& number, const int& totalProfit);
	Store(const std::string& name);
	~Store();


	void setName(const std::string& name);
	void setAddress(const std::string& address);
	void setYearOfFoundation(const std::string& yearOfFoundation);
	void setNumber(const std::string& number);
	void setTotalProfit(const int& totalProfit);

	std::string getName() const;
	std::string getAddress() const;
	std::string getYearOfFoundation() const;
	std::string getNumber() const;
	int getTotalProfit() const;

	void N_MonthSales(int counMonth);
	void profitRatingList(Store stroe1, Store stroe2, Store stroe3);
	
	void deserialize();
	void serialize();	
	void deserialize(std::string filename);
	void serialize(std::string filename);


private:
	std::string name_;
	std::string address_;
	std::string yearOfFoundation_;
	std::string number_;
	int totalProfit_;
	int middleIncom_;
};

