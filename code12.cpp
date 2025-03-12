#include <iostream>
using namespace std;

int main()
{
    int num, fact = 1;
    cout << "Enter Num Value : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout << "Factorial Of Number : " << fact << endl;
}