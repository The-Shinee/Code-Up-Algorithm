#include<iostream>
using namespace std;

int main()
{
	try
	{
		// ���� ���� �� �Է°� �ޱ�
		int Input;
		cin >> Input;
		
		// �Է� ���� ����(1~9)�� ����� ���� ó��
		if(Input < 1 || Input > 10)
			throw Input;
			
		// ���
		for(int i = 1 ; i <= Input ; i++)
		{
			// i���� 3�� ����� ��� 'X' ���
			// �� �ܿ��� i�� ��� 
			if(i % 3 == 0)
				cout << "X ";
			else
				cout << i << ' ';
		} 
	}
	catch(int expn)
	{
		// ���� �޼��� ���
		cout << "error : �Է� ���� ������ ������ϴ�." << endl;
		cout << "�Է� �� : " << expn << endl; 
	}
	
	return 0;
}
