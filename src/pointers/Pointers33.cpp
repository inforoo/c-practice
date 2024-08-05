#include <iostream>
using namespace std;

struct Length
{
	int meters;
	float centimeters;
};


int main (int argc, char *argv[])
{
	Length *ptr, l;

	ptr = &l;

	cout << "argc:" << argc << endl;
	cout << "*argv[]:" << endl;
	for(int i=0; i<argc; i++){
	   cout << "element argv[" << i << "] = " << argv[i] << endl;
	}

	if(argc==1){
	   cout << "program format: Structure33 <meters>" << endl;
	   return 0;
	}

	//(*ptr).meters = argv[1];
	(*ptr).meters = atoi(argv[1]);

	//(*ptr).meters = (int)(argv[1][0]);
	(*ptr).centimeters = (*ptr).meters*100;

	//(*ptr).meters = (*ptr).meters/2;
	//(*ptr).centimeters = (*ptr).centimeters/2;

	cout << "Length = " << (*ptr).meters << " meters or " << (*ptr).centimeters << " centimeters" << endl;


	return 0;
}
