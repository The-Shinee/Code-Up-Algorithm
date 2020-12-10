#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int i = 0;

    // char 사용하기
    char Input[9];
    cin >> Input;

    while(Input[i] != '\0')
    {
        cout << Input[i];
        i++;
    }

    // string 사용하기
    // string Input;
    // cin >> Input;
    // cout << Input;

    return 0;
}