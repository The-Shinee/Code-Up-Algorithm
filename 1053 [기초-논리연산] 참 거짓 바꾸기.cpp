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
		std::cout << "[ error ] : value �� 0 �Ǵ� 1�� �ƴմϴ�." << std::endl;
	}
	
	return 0;
}
