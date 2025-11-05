#include <iostream>
#include <math.h>

bool isOddOrEven(int x)
{
	if (x % 2 == 0 && x > 0) { return false; }
	else { return true; }
}

int oddNumber(int oddNumber)
{return 3 * oddNumber + 1;}

int evenNumber(int evenNumber)
{return evenNumber / 2;}

bool isPerfectEven(int perfectEven)
{
	return (((perfectEven & (perfectEven - 1)) == 0));
}

int main()
{
	int x{};
	int stepCount{0};
	bool odd{};
	bool even{};

	std::cout << "Enter a Number: " << '\n';
	std::cin >> x;

	while (x != 1)
	{
		// std::cout << "step " << stepCount << ': ';
		// stepCount += 1;

		if (isPerfectEven(x) == true)
		{
			x = 1;
			std::cout << x << '\n';
			break;
		}
		if (isOddOrEven(x) == true)
		{
			x = oddNumber(x);
			std::cout << x << '\n';
		}
		else
		{
			x = evenNumber(x);
			std::cout << x << '\n';
		}
	}

	return 0;
}

