#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Num Value : ";
    cin >> num;

    int arr[10], count = 0;

    int temp = num;
    while (temp > 0)
    {
        arr[count] = temp % 10;
        temp /= 10;
        count++;
    }

    int firstDigit = arr[count - 1];
    int lastDigit = arr[0];
    int sum = firstDigit + lastDigit;

    cout << "Sum of first and last digit: " << sum << endl;
}
