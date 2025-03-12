#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element : ";
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int deleteelement;
    cout << "Enter Delete : ";
    cin >> deleteelement;

    for (int i = deleteelement; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}