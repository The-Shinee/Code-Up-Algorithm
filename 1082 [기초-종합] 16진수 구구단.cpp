#include<iostream>
using namespace std;

int main()
{
	try
	{
		// ���� ���� �� �� �Է¹ޱ� 
		int hexadecimal;
		cin >> hex >> hexadecimal;
		
		// �Է� ����(A ~ F)�� ����� ����ó��
		if(hexadecimal < 0xA || hexadecimal > 0xF)
			throw hexadecimal; 
			
		// ���
		for(int i = 0x1 ; i <= 0xF ; i++)
		{
			cout << hex << uppercase << hexadecimal <<'*' << i << '=' << hexadecimal * i << endl;
		} 
	}
	catch(int expn)
	{
		cout << "error : �Է� ������ ������ϴ�." << endl;
		cout << "�Էµ� �� : " << hex << expn << endl;
	}
	
	return 0;
} 
