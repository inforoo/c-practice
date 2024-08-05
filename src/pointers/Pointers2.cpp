#include <iostream>
using namespace std;

struct Length
{
	int meters;
	float centimeters;
};

int main()
{
	Length *ptr, l;

	ptr = &l;

	cout << "Enter meters: ";
	cin >> (*ptr).meters;

        (*ptr).centimeters = (*ptr).meters*100;

	cout << "Length = " << (*ptr).meters << " meters or "\ 
	<< (*ptr).centimeters << " centimeters" << endl;

	return 0;
}
