#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int n = 5;

    int st = 0, end = n - 1;
    bool ispelindrome = true;

    while (st < end)
    {
        if (arr[st] != arr[end])
        {
            ispelindrome = false;
            break;
        }

        st++;
        end--;
    }

    if (ispelindrome == true)
    {
        cout << "Yes, Array is Pelindrome ";
    }
    else
    {
        cout << "No, Array are Not Pelindrome";
    }
}