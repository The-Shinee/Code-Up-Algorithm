#include<iostream>
using namespace std;

int main()
{
	char error; // ���� ��
	 
	try
	{
		// ���� ���� �� �� �Է¹ޱ�
		int r, g, b, sum = 0;
		cin >> r >> g >> b;
		
		// ���� ���� ����(0~128)�� ����� ����ó��
		if(r < 0 || r > 128)
		{
			error = 'r'; 
			throw r;
		}
		if(g < 0 || g > 128)
		{
			error = 'g'; 
			throw g;
		}
		if(b < 0 || b > 128)
		{
			error = 'b'; 
			throw b;
		}
		
		// ���
		for(int i = 0 ; i < r ; i++)
		{
			for(int j = 0 ; j < g ; j++)
			{
				for(int k = 0 ; k < b ; k++)
				{
					cout << i << ' ' << j << ' ' << k << '\n';
					sum++;
				}
			}
		}
		
		cout << sum; 
		 
	}
	catch(int expn)
	{
		// ���� �޼��� ���
		cout << "error : �Է°��� ������ ������ϴ�." << '\n';
		cout << error << "�� : " << expn << '\n'; 
	}
	
	return 0;
}
