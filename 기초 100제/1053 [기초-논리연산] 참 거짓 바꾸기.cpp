#include<iostream>

int main()
{
	try
	{
		int a;
		std::cin >> a;
		
		if(a != 0 && a != 1)
			throw a;
			
		std::cout << !a;
	}
	catch(int expn)
	{
		std::cout << "[ error ] : value 가 0 또는 1이 아닙니다." << std::endl;
	}
	
	return 0;
}
