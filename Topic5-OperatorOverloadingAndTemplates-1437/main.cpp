#include<algorithm>
#include<iostream> 
#include<vector> 

class Shoe
{
public: 
	std::string name; 
	double price; 
	int size; //ex 5 - 13
	//sie_ starRating; 
public: 
	Shoe() = delete; 
	Shoe(const std::string& name, const double price, const int size)
		:name(name), price(price), size(size)
	{

	}

	//5 > 4 //the > operator yields a bool (true or false)
	//bool operator +  this can ALSO be done
	/*@returns TRUE if "this" shoe's name comes before rhs's name in the alphabet*/
	bool operator < (const Shoe& rhs) //Shoe s1; Shoe s2 if (s1 < s2)
	{
		//ambiguous: 
		if (this->name < rhs.name)
		{
			return true; 
		}

		else
		{
			return false; 
		}
	}
};

int main()
{
	//WHY is this thing called "operator overloading" useful? 
	//+/-* % ->operators 
	// overloading a function ex: doSomething(3) doSomething(2, 3)



	std::vector<int> nums =
	{
		8, 6, 7, 5, 3, 0, 9
	};

	std::sort(nums.begin(), nums.end()); 

	for (const int& num : nums)
	{
		std::cout << num << " "; 
	}

	//make a dynamic array of shoes and THEN sort by various attributes (price, size)
	Shoe hisShoe("your shoe name", 50.99, 12.5);
	

	std::vector<Shoe> shoeList =
	{
		Shoe("my shoe - Altra Olympus something or other", 89.99, 11.5),
		hisShoe,
		Shoe("converse Chuck Taylor All Star", 39.99, 7.5)
	};

	//NOW sort!
	std::sort(shoeList.begin(), shoeList.end()); //requires overloading < for Shoe type

	for (const auto& currentShoe : shoeList)
	{
		//std::cout << currentShoe << "\n";

		std::cout << currentShoe.name << "\n";
	}

}