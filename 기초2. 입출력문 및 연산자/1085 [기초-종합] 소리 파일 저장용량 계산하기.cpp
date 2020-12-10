#include<iostream>
using namespace std;

int main()
{
	// 변수 선언 및 입력받기 
	double h, b, c, s;
	double file = 0;
	cin >> h >> b >> c >> s;
	
	// 용량을 bit로 계산 후 MB로 다시 나눠주기
	 
	file = h * b * c * s; 
	file /= 8 * 1024 * 1024;
	
	// 출력 
	cout << fixed;
	cout.precision(1);
	cout << file << " MB";
	
	return 0;
}
