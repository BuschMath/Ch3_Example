#include <iostream>

int func(int a, int b);		// prototype

int main()
{
	std::cout << func(2, 7);		// call

	return 0;
}

// definition
int func(int a, int b)
{
	return a + b;
}