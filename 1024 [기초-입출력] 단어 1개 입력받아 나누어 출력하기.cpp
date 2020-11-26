#include<stdio.h>

int main()
{
	char arr[21];
	scanf("%s", arr);
	
	int i = 0;
	while(arr[i] != '\0')
	{
		printf("\'%c\'\n", arr[i]);
		i++;
	}
	
	return 0;
}
