#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {50, 40, 30, 20, 10};
    int n = 5;

    int st = 0, end = n - 1;

    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}