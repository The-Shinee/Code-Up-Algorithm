#include<iostream>

int main()
{
	try
	{
		int a, b, result;
		std::cin >> a >> b;
		
		if(a < 0)
			throw a;
		if(b > 10)
			throw b;
		
		result = a << b;
		std::cout << result << std::endl;
	}
	catch(int expn)
	{
		if(expn < 0)
			std::cout << "[error] : a < 0" << std::endl;
		else
			std::cout << "[error] : b > 10" << std::endl;
	}
	
	return 0;
}
