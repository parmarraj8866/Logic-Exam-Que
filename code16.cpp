#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 2, 3, 4, 5};
    int sum = 0, n = 5;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Average of Array : " << sum / 2 << endl;
}