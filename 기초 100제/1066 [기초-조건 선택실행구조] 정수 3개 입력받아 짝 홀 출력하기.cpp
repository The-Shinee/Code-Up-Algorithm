#include<iostream>
using namespace std;

void print(int value)
{
	if(value % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	print(a);
	print(b);
	print(c);
	
	return 0;
}
