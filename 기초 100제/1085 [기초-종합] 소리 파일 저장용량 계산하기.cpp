#include<iostream>
using namespace std;

int main()
{
	// ���� ���� �� �Է¹ޱ� 
	double h, b, c, s;
	double file = 0;
	cin >> h >> b >> c >> s;
	
	// �뷮�� bit�� ��� �� MB�� �ٽ� �����ֱ�
	 
	file = h * b * c * s; 
	file /= 8 * 1024 * 1024;
	
	// ��� 
	cout << fixed;
	cout.precision(1);
	cout << file << " MB";
	
	return 0;
}
