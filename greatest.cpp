/* Dawson Swain
* CS 201
* September 11, 2020
* 17:47
* Write a code where a user can input 3 numbers than find the greatest number
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    float num1, num2, num3;

    cout << "Enter a number and hit enter 3 times: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
        cout << "Largest number: " << num1;

    if (num2 >= num1 && num2 >= num3)
        cout << "Largest number: " << num2;

    if (num3 >= num1 && num3 >= num2)
        cout << "Largest number: " << num3;

    return 0;
}

