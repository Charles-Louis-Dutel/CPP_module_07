#include <iostream>
#include "../includes/Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;//
// 	return 0;
// }

int	main(void)
{
	try
	{
		Array<int> emptyArray;
		std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

		Array<int> intArray(5);
		std::cout << "Size of intArray: " << intArray.size() << std::endl << std::endl;

		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i * 10;

		std::cout << "intArray: ";
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " ";
		std::cout << std::endl;

		Array<int> copiedArray(intArray);
		std::cout << "copiedArray: ";
		for (unsigned int i = 0; i < copiedArray.size(); i++)
			std::cout << copiedArray[i] << " ";
		std::cout << std::endl << std::endl;

		copiedArray[0] = 999;
		std::cout << "After modification of copiedArray[0]:" << std::endl;
		std::cout << "copiedArray[0]: " << copiedArray[0] << std::endl;
		std::cout << "intArray[0] (must be unchanged): " << intArray[0] << std::endl  << std::endl;

		Array<int> assignedArray = intArray;
		std::cout << "assignedArray: ";
		for (unsigned int i = 0; i < assignedArray.size(); i++)
			std::cout << assignedArray[i] << " ";
		std::cout << std::endl << std::endl;

		std::cout << "Trying to access elements not in range: intArray[10]:" << std::endl;
		std::cout << intArray[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
