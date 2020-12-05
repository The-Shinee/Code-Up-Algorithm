#include<iostream>
using namespace std;

int main()
{
	char error; // 에러 값
	 
	try
	{
		// 변수 선언 및 값 입력받기
		int r, g, b, sum = 0;
		cin >> r >> g >> b;
		
		// 변수 값이 범위(0~128)를 벗어나면 에러처리
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
		
		// 출력
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
		// 에러 메세지 출력
		cout << "error : 입력값이 범위를 벗어났습니다." << '\n';
		cout << error << "값 : " << expn << '\n'; 
	}
	
	return 0;
}
