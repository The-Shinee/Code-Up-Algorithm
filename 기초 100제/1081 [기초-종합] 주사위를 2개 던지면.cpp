#include<iostream>
using namespace std;

int main()
{
	try
	{
		// 변수 선언 및 n과 m 입력받기 
		int n, m;
		cin >> n >> m;
		
		// n 또는 m이 음수거나 10 이상일 경우 에러처리 
		if(n < 0 || n > 10)
			throw n;
		if(m < 0 || m > 10)
			throw m;
	
		// 출력 
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
		// 에러문구 출력 
		cout << "n 또는 m이 음수거나 10 이상입니다." << endl;
		cout << "입력된 값 : " << expn << endl;
	}
	
	return 0;
}
