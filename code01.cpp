#include <iostream>
using namespace std;

int main()
{
    int n1 = 10, n2 = 20;

    int temp = n1;
    n1 = n2;
    n2 = temp;

    cout << n1 << endl;
    cout << n2 << endl;
}