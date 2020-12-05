#include<iostream>
using namespace std;

int main()
{
	try
	{
		// 변수 선언 및 값 입력받기 
		int hexadecimal;
		cin >> hex >> hexadecimal;
		
		// 입력 범위(A ~ F)를 벗어나면 에러처리
		if(hexadecimal < 0xA || hexadecimal > 0xF)
			throw hexadecimal; 
			
		// 출력
		for(int i = 0x1 ; i <= 0xF ; i++)
		{
			cout << hex << uppercase << hexadecimal <<'*' << i << '=' << hexadecimal * i << endl;
		} 
	}
	catch(int expn)
	{
		cout << "error : 입력 범위를 벗어났습니다." << endl;
		cout << "입력된 값 : " << hex << expn << endl;
	}
	
	return 0;
} 
