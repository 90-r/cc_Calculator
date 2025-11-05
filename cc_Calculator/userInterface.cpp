#include <iostream>
#include "ccMainHeader.h"

bool userInterface(int start)
{
	bool runCalc{};
	long long number{};

	while (start == 1)
	{

		std::cout << "Do you want to Start or End Calculator? (1 or 0)" << '\n';
		std::cin >> runCalc;

		if (runCalc == true)
		{
			std::cout << "Input a Number to run Calculator" << '\n';
			std::cin >> number;
			runCC_Calc(number);
			runCalc = false;
		}
		else
		{
			break;
		}
	}
	return 1;
}
