#include<iostream>
using namespace std;

int main()
{
	char Input;
	cin >> Input;
	
	for(int i = 'a' ; i <= Input ; i++)
	{
		cout << static_cast<char>(i) << ' ';
	}
	
	return 0;
}
