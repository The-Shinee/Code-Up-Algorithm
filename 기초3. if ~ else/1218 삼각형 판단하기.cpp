#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a)
    {
            if(a == b && a == c)
        {
            cout << "���ﰢ��";
        }
        else if(a == b || a == c || b == c)
        {
            cout << "�̵�ﰢ��";
        }
        else if(pow(a, 2) + pow(b, 2) == pow(c, 2))
        {
            cout << "�����ﰢ��";
        }
        else
            cout << "�ﰢ��";
    }    
    else
        cout << "�ﰢ���ƴ�";

    return 0;
}