#include<iostream>
using namespace std;

int prime[10000001];
int Count;
int a, b;
bool setCheck = false;

void isPrimeNumber(int value)
{
    for(int i = 2 ; i*i <= value ; i++)
    {
        if(value % i == 0)
            return;
    }
    prime[Count] = value;
    Count++;
}

int main()
{
    int n;
    cin >> n;

    // 공배수 구하기
    for(int i = 2 ; i <= n ; i++)
    {
        if(n % i == 0)
        {
            isPrimeNumber(i);
        }
    }

    if(Count < 2)
        cout << "wrong number";
    else
    {
        for(int i = 0 ; i <= Count - 1 ; i++)
        {
            for(int j = i + 1 ; j <= Count ; j++)
            {
                if(prime[i] * prime[j] == n)
                {
                    if(!setCheck)
                    {
                        a = prime[i];
                        b = prime[j];
                        setCheck = true;
                    }
                    else
                    {
                        if(a + b > prime[i] + prime[j])
                        {
                            a = prime[i];
                            b = prime[j];
                        }
                    }
                }   
            }
        }
        
        if(a != 0 && b != 0)
        {
            cout << a << ' ' << b;
        }
        else
        {
            cout << "wrong number";
        }
    }

    return 0;
}