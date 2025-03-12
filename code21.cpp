#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element In Array : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pos, value;
    cout << "Enter Position Value Insert : ";
    cin >> pos;
    cout << "Enter Value : ";
    cin >> value;

    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = value;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}