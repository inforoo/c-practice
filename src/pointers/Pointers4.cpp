#include <iostream>
using namespace std;

struct Length
{
	int meters;
	float centimeters;
};

void printData(struct Length* ptr);
void printData2(struct Length &l);

int main()
{
	Length *ptr, l;

	ptr = &l;

	cout << "Enter meters: ";
	cin >> ptr->meters;
	
	ptr->centimeters = ptr->meters*100;

	printData(ptr);
	printData2(l);

	return 0;
}

void printData(struct Length* p){
	cout << "Length = " << p->meters << " meters " << p->centimeters << " centimeters" << endl;
}
void printData2(struct Length &t){
	cout << "Length = " << t.meters << " meters " << t.centimeters << " centimeters" << endl;
}
