#include<iostream>
using namespace std;

struct Person{
	int citizenship;
	int age;
};

void PrintPerson(struct Person* p);

void ChangeC(Person* t){
        t -> citizenship = 2;
}

void ChangeCC(Person& t){
        t.citizenship = 3;
}

int main(){

        int c=1;
        struct Person l;
        struct Person* p;

	p = &l;

	p -> citizenship = c;
	p -> age = 27;

	PrintPerson(p);
	ChangeC(p);
	ChangeCC(l);
	PrintPerson(p);
	return 0;
}
void PrintPerson(struct Person* t){
	cout << " Person citizenship: " << t -> citizenship << endl;
	cout << " Person age: " << t -> age << endl;
}

