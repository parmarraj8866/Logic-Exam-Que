#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digits[10];
    int count = 0;

    int temp = num;
    while (temp > 0)
    {
        digits[count] = temp % 10;
        temp /= 10;
        count++;
    }

    int midSum = 0;
    if (count % 2 == 0)
    {
        midSum = digits[count / 2] + digits[(count / 2) - 1];
    }
    else
    {
        midSum = digits[count / 2];
    }

    cout << "Sum of middle digits: " << midSum << endl;
    return 0;
}
