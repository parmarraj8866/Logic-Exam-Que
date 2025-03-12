#include <iostream>
using namespace std;

int main()
{
    int num = 21, x, y, z;

    x = 0;
    y = 1;
    z = 0;

    for (; z <= num; z = x + y)
    {
        cout << z << " ";
        x = y;
        y = z;
    }
}