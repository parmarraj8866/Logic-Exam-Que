#include <iostream>
using namespace std;

int main()
{
    int num, rem = 0;
    cout << "Enter Num Value : ";
    cin >> num;

    int temp = num;

    while (temp > 0)
    {
        rem = rem * 10 + temp % 10;
        temp /= 10;
    }

    if (rem == num)
    {
        cout << "Yes, Pelindrome Number";
    }
    else
    {
        cout << "Not, Pelindrome Number";
    }
}