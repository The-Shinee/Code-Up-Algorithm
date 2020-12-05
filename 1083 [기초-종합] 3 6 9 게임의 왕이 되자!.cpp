#include<iostream>
using namespace std;

int main()
{
	try
	{
		// 변수 선언 및 입력값 받기
		int Input;
		cin >> Input;
		
		// 입력 값이 범위(1~9)를 벗어나면 에러 처리
		if(Input < 1 || Input > 10)
			throw Input;
			
		// 출력
		for(int i = 1 ; i <= Input ; i++)
		{
			// i값이 3의 배수인 경우 'X' 출력
			// 그 외에는 i값 출력 
			if(i % 3 == 0)
				cout << "X ";
			else
				cout << i << ' ';
		} 
	}
	catch(int expn)
	{
		// 에러 메세지 출력
		cout << "error : 입력 값이 범위를 벗어났습니다." << endl;
		cout << "입력 값 : " << expn << endl; 
	}
	
	return 0;
}
