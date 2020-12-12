#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int grade, classnum, num;
    cin >> grade >> classnum >> num;
    cout << grade << setw(2) << setfill('0') << classnum << setw(3) << setfill('0') << num;

    return 0;
}