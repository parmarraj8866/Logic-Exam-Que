#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N Value : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element in Array : ";
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        bool isunique = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isunique = false;
                break;
            }
        }

        if (isunique)
        {
            cout << arr[i] << " ";
        }
    }
}
