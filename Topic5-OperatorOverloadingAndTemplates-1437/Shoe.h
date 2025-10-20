#pragma once
#include<iomanip> 
#include<iostream> 
#include <string>
class Shoe
{
private: 
	std::string name;
	double price;
	int size; //ex 5 - 13
public:
	Shoe() = delete;
	Shoe(const std::string& name, const double price, const int size);

	bool operator == (const Shoe& rhs);

	//bool operator +  this can ALSO be done
	

	/*@param rhs -> the Shoe on the right hand side @returns TRUE if "this" shoe's name comes before rhs's name in the alphabet*/
	bool operator < (const Shoe& rhs); //Shoe s1; Shoe s2 if (s1 < s2)
	//why does < return bool? 5 > 4 //the > operator yields a bool (true or false)


	/*functions decorated with keyword FRIEND have access to private bits*/
	friend std::ostream& operator << (std::ostream& os, const Shoe& shoe)
	{

		os << std::left << std::setw(35) << shoe.name;
		os << std::left << std::setw(6) << shoe.price;
		os << std::left << std::setw(5) << shoe.size;
		os << "\n";
		return os; 
	}
};
