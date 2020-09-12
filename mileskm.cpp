/*Dawson Swain
* CS 201
* September 11, 2002
* 17:59
* Convert Miles to KM
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double m, km;
	cout << "I will covert miles to kilometers" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Enter the amout of miles: ";
	cin >> m;

	if (m <= 0.0) {
		cout << "Plese enter a postive number and try agian" << endl;
		return 1;
	}

	else if (m > 0.0) {
			km = (m * 1.609);
			cout << km << endl;
	}

	
	return 0;

}


