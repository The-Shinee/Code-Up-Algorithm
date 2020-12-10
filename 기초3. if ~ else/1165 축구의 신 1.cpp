#include<iostream>
using namespace std;

int main()
{
    int time, score;
    cin >> time >> score;

    score += (90 - time) / 5;
    if(time % 5 != 0)
        score++;

    cout << score;

    return 0;
}