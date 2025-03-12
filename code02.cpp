#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter N1 Value : ";
    cin >> n1;
    cout << "Enter N2 Value : ";
    cin >> n2;

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    cout << "N1 : " << n1 << endl;
    cout << "N2 : " << n2 << endl;
}
