#include <iostream>
#include <iomanip>

int func(int a, int b);		// prototype

int main()
{
	std::cout << func(2, 7) << std::endl;		// call

	std::cout << std::setw(7) << "1234" << std::endl;
	std::cout << std::setw(6) << "1234" << std::endl;
	std::cout << std::setw(5) << "1234" << std::endl;
	std::cout << std::setw(4) << "1234" << std::endl;
	std::cout << std::setw(3) << "1234" << std::endl;

	float x = 310.0, y = 4.827;
	std::cout << std::fixed << std::setw(10) << std::setprecision(5) << x << std::endl;
	std::cout << std::setw(6) << std::setprecision(2) << y << std::endl;

	std::cout << std::showpoint << std::setprecision(2) << "$" << float(100);


	return 0;
}

// definition
int func(int a, int b)
{
	return a + b;
}