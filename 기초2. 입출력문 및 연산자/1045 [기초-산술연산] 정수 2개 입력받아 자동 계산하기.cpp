#include<iostream>

int main()
{
	unsigned short int a, b;
	std::cin >> a >> b;
	
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a % b << std::endl;
	
	float c = static_cast<float>(a) / static_cast<float>(b);
	
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << c << std::endl;
	
	return 0;
}
