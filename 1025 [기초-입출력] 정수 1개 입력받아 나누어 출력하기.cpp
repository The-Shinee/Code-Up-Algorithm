#include<stdio.h>

int main()
{
	int a[5];
	scanf("%1d%1d%1d%1d%1d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	int multi = 10000;
	for (int i = 0; i < 5; i++)
	{
		a[i] *= multi;
		printf("[%d]\n", a[i]);
		multi /= 10;
	}

	return 0;
}
