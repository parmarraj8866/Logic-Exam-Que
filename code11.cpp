#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter Num Value : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "Yes NUmber is Prime Number";
    }
    else
    {
        cout << "Not, Number is Prime";
    }
}