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
            cout << "Á¤»ï°¢Çü";
        }
        else if(a == b || a == c || b == c)
        {
            cout << "ÀÌµîº¯»ï°¢Çü";
        }
        else if(pow(a, 2) + pow(b, 2) == pow(c, 2))
        {
            cout << "Á÷°¢»ï°¢Çü";
        }
        else
            cout << "»ï°¢Çü";
    }    
    else
        cout << "»ï°¢Çü¾Æ´Ô";

    return 0;
}