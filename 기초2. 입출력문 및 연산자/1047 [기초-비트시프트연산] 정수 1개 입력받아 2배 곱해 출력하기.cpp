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
		std::cout << "[ error ] : ������ ��� �Է��Դϴ�. " << std::endl;
		std::cout << "value : " << expn << std::endl;
	}
		
	return 0;
}
