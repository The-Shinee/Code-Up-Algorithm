#include<stdio.h>

int main()
{
	// 변수 선언 및 값 입력받기
	int r, g, b, sum = 0;
	scanf("%d %d %d", &r, &g, &b);
	
	// 출력
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < g ; j++)
		{
			for(int k = 0 ; k < b ; k++)
			{
				printf("%d %d %d\n", i, j, k);
				sum++;
			}
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
