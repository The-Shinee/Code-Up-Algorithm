#include<iostream>
using namespace std;

int main()
{
    int time, score_1, score_2;
    cin >> time >> score_1 >> score_2;

    while(time < 90)
    {
        score_1++;
        time += 5;
    }

    if(score_1 > score_2)
        cout << "win";
    else if(score_1 < score_2)
        cout << "lose";
    else
        cout << "same";

    return 0;
}