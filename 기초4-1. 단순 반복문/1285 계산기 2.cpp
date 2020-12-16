#include<iostream>
using namespace std;

int main()
{
	int n, result;
	char c;
	cin >> result;
	while (true)
	{
		cin >> c;
		if (c == '=')
			break;
		cin >> n;

        switch (c)
        {
        case '+':
            result += n;
            break;
        case '-':
            result -= n;
            break;
        case '*':
            result *= n;
            break;
        case '/':
            result /= n;
            break;
        default:
            break;
        }
	}

    cout << result;

	return 0;
}