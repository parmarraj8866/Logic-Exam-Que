#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findminimum(int arr[], int n)
{
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
}

int findmaximum(int arr[], int n)
{
    int maxium = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxium)
        {
            maxium = arr[i];
        }
    }
    return maxium;
}

int main()
{
    int arr[5] = {20, 10, 50, 30, 40}, n = 5;

    int n1 = findminimum(arr, n);
    int n2 = findmaximum(arr, n);

    cout << "Minimum is : " << n1 << endl;
    cout << "Maximum is : " << n2 << endl;
}