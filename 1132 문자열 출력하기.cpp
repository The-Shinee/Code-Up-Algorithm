#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int i = 0;

    // char ����ϱ�
    char Input[9];
    cin >> Input;

    while(Input[i] != '\0')
    {
        cout << Input[i];
        i++;
    }

    // string ����ϱ�
    // string Input;
    // cin >> Input;
    // cout << Input;

    return 0;
}