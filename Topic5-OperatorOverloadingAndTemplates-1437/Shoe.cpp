#include "Shoe.h"

Shoe::Shoe(const std::string& name, const double price, const int size)
	:name(name), price(price), size(size)
{

}

bool Shoe::operator==(const Shoe& rhs)
{
	return (this->name == rhs.name
		&&
		this->price == rhs.price
		&&
		this->size == rhs.size); 
}

bool Shoe::operator<(const Shoe& rhs)
{
	//if (this->price < rhs.price)
	//{
	//	return true;
	//}

	//else
	//{
	//	return false;
	//}

	return (this->price < rhs.price); 
}
