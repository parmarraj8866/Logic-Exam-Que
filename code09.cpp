#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, rem, count = 0;
    cout << "Enter Num Value : ";
    cin >> num;

    int temp = num;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = num;
    int ans = 0;

    while (temp > 0)
    {
        rem = temp % 10;
        ans += pow(rem, count);
        temp /= 10;
    }

    if (ans == num)
    {
        cout << "Yes, This is Armstrong Number";
    }
    else
    {
        cout << "Not, Armstrong Number";
    }
}