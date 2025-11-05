#include <iostream>
#include <math.h>
#include "ccMainHeader.h"

int main()
{
	int start{};
	std::cout << "Would you like to start? (1 or 0)" << '\n';
	std::cin >> start;
	userInterface(start);

	return 0;
}

