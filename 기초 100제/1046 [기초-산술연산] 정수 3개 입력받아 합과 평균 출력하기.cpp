#include<iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	
	long long int Plus = static_cast<long long int>(a) + static_cast<long long int>(b) + static_cast<long long int>(c); 
	std::cout << Plus << std::endl;
	
	double Average = (static_cast<double>(a) +  static_cast<double>(b) + static_cast<double>(c)) / 3; 
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << Average;
	
	return 0;
}
