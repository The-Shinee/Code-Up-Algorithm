#include<iostream>

int main()
{
	try
	{
		int a, b;
		
		std::cin >> a >> b;
		
		if(a != 0 && a != 1)
			throw a;
		if(b != 0 && b != 1)
			throw b;
			
		std::cout << ((!a && !b) || (a && b));
	}
	catch(int expn)
	{
		std::cout << "[ error ] : a 또는 b 값이 범위를 벗어났습니다." << std::endl;
		std::cout << "벗어난 값 : " << expn << std::endl; 
	}
	
	return 0;
}
