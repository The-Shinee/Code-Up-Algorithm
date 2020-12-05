#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, i = 1;
	cin >> n;
	
	while(true)
	{
		sum += i;
		
		if(sum >= n)
			break;
		
		i++;
	}
	
	cout << i;	
	
	return 0;
}
