#include<iostream>
using namespace std;

int main()
{
	try
	{
		// ���� ���� �� n�� m �Է¹ޱ� 
		int n, m;
		cin >> n >> m;
		
		// n �Ǵ� m�� �����ų� 10 �̻��� ��� ����ó�� 
		if(n < 0 || n > 10)
			throw n;
		if(m < 0 || m > 10)
			throw m;
	
		// ��� 
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= m ; j++)
			{
				cout << i << ' ' << j << endl;
			}
		}
	} 
	catch(int expn)
	{ 
		// �������� ��� 
		cout << "n �Ǵ� m�� �����ų� 10 �̻��Դϴ�." << endl;
		cout << "�Էµ� �� : " << expn << endl;
	}
	
	return 0;
}
