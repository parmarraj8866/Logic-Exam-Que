#include <iostream>
using namespace std;

int main()
{
    float amount;

    cout << "Enter Amount : ";
    cin >> amount;

    int rupees = (int)amount;
    int paisa = (amount - rupees) * 100;

    cout << " Rupees : " << rupees << endl;
    cout << " Paisa : " << paisa << endl;
}
