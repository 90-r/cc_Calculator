#include <iostream>
#include "calculationHeader.h"

bool runCC_Calc(long long number)
{
	long long x = number;
	int stepCount{};
	bool odd{};
	bool even{};

	while (x != 1)
	{
		if (isPerfectEven(x) == true)
		{
			while (x != 1)
			{
				x = x / 2;
				stepCount++;
				std::cout << "step " << stepCount << ": " << x << '\n';
			}
			break;
		}
		if (isOddOrEven(x) == true)
		{
			x = oddNumber(x);

		}
		else
		{
			x = evenNumber(x);
		}

		stepCount++;
		std::cout << "step " << stepCount << ": " << x << '\n';
	}
	return 1;
}

 bool isOddOrEven(long long x)
{
	if (x % 2 == 0 && x > 0) { return false; }
	else { return true; }
}

 long long oddNumber(long long oddNumber)
{
	return 3 * oddNumber + 1;
}

 long long evenNumber(long long evenNumber)
{
	return evenNumber / 2;
}

 bool isPerfectEven(long long perfectEven)
{
	return (((perfectEven & (perfectEven - 1)) == 0));
}