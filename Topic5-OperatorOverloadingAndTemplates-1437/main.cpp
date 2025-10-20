#include<algorithm>
#include<iostream> 
#include<vector> 
#include "Shoe.h"

//template //allow "generic" programming 

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

	//for (const int& num : nums)
	//{
	//	std::cout << num << " "; 
	//}

	//make a dynamic array of shoes and THEN sort by various attributes (price, size)
	Shoe hisShoe("Adidas", 50.99, 12.5);
	
	std::vector<Shoe> shoeList =
	{
		Shoe("Altra Olympus V", 89.99, 11.5), 
		hisShoe,
		Shoe("Converse Chuck Taylor All Star", 39.99, 7.5) //an "anonymous" object
												//"a girl has no name" (GoT reference)
	};

	//NOW sort!
	std::sort(shoeList.begin(), shoeList.end()); //requires overloading < for Shoe type
	//std::cout << "asdfadsf";
	for (const auto& currentShoe : shoeList)
	{
		std::cout << currentShoe;

		//std::cout << currentShoe.name << "\n";
	}

	if (shoeList[0] == shoeList[1])
	{
		std::cout << "Shoes at indices 0 and 1 are the SAME shoe!\n";
	}

	else
	{
		std::cout << "NOT the same shoe :(";
	}

}