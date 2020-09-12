/*Homework 1
Dawson Swain
9/10/2020
17:13
Make a program that creates a diamond out of # and have its size depend on a user inputed number
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int i, j, r;
    cout << " Input number of rows to the center of the diamond: ";
    cin >> r;
    for (i = 0;i <= r;i++)
    {
        for (j = 1;j <= r - i;j++)
            cout << " ";
        for (j = 1;j <= 2 * i - 1;j++)
            cout << "*";
        cout << endl;
    }
    for (i = r - 1;i >= 1;i--)
    {
        for (j = 1;j <= r - i;j++)
            cout << " ";
        for (j = 1;j <= 2 * i - 1;j++)
            cout << "*";
        cout << endl;;
    }
    return 0;
}



