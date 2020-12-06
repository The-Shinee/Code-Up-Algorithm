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
			
		std::cout << (a || b);
	}
	catch(int expn)
	{
		std::cout << "[ error ] : a �Ǵ� b ���� ������ ������ϴ�." << std::endl;
		std::cout << "��� �� : " << expn << std::endl; 
	}
	
	return 0;
}
