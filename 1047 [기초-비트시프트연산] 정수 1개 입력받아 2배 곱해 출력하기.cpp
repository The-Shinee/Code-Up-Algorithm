#include<iostream>
#include<limits.h>

int main()
{
	int a;
	try{
		std::cin >> a;
		
		if(a < INT_MIN / 2 || a > INT_MAX / 2)
			throw a;
		
		a = a << 1;
		std::cout << a << std::endl;
	}
	catch(int expn)
	{
		std::cout << "[ error ] : 범위를 벗어난 입력입니다. " << std::endl;
		std::cout << "value : " << expn << std::endl;
	}
		
	return 0;
}
