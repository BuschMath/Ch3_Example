#include <iostream>

int main()
{
	char a = 'A' + 26;
	int b = 10 + 5 * 2 - 1 / 10;
	int c = int(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	float d = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	int e = 42 + 42 / 2 * 13 - 13;
	int f = int('d') - 10;
	char g = 'g' - 32;
	int h = 7 / 5;
	float i = 7 / 5;
	float j = 7.0 / 5.0;
	float k = float(7 / 5);
	float l = float(7) / float(5);


	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "j: " << j << std::endl;
	std::cout << "k: " << k << std::endl;
	std::cout << "l: " << l << std::endl;
}