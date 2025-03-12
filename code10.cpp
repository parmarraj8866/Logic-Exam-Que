#include <iostream>
using namespace std;

int issumcal(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool ismagicnum(int num)
{
    while (num >= 10)
    {
        num = issumcal(num);
    }
    return (num == 1);
}

int main()
{
    int num, rem;
    cout << "Enter Num value : ";
    cin >> num;

    if (ismagicnum(num))
    {
        cout << "Yes, Magic Number";
    }
    else
    {
        cout << "Not, Magic Number";
    }
}