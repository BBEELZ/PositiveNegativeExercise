#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "The number you have entered is positive! " << endl;
    }
    else if (number < 0)
    {
        cout << "The number you have entered is negative! " << endl;
    }
    else
    {
        cout << "The number is zero! " << endl;
    }
}
