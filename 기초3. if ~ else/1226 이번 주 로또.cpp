#include<iostream>
using namespace std;

int number[7];
int winning[8];

int main()
{
    int i, j, count = 0;
    bool bonus = false;

    for(i = 1 ; i <= 7 ; i++)
    {
        cin >> winning[i];
    }
    for(i = 1 ; i <= 6 ; i++)
    {
        cin >> number[i];
    }

    for(i = 1 ; i <= 6 ; i++)
    {
        for(j = 1 ; j <= 7 ; j++)
        {
            if(number[i] == winning[j])
            {
                if(j == 7)
                {
                    bonus = true;
                    break;
                }
                count++;
                break;
            }
        }
    }

    if(count == 6)
        cout << 1;
    else if(bonus && count == 5)
        cout << 2;
    else if(count == 5)
        cout << 3;
    else if(count == 4)
        cout << 4;
    else if(count == 3)
        cout << 5;
    else
        cout << 0;

    return 0;
}