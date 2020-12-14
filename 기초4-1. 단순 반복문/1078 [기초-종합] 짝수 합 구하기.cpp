#include<iostream>
using namespace std;

int main()
{
	int Input, sum = 0;
	cin >> Input;
	
	for(int i = 1 ; i <= Input ; i++)
	{
		if(i % 2 == 0)
			sum += i;
	}
	cout << sum;
	
	return 0;
}
