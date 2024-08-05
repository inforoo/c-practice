#include<iostream>
using namespace std;

struct Person
{
	int citizenship;
	int age;
};

void PrintPerson(struct Person t);
void ChangeAge(struct Person t);

int main()
{
	struct Person p;

	p.citizenship = 1;
	p.age = 27;

	PrintPerson(p);
	ChangeAge(p);
	PrintPerson(p);
	return 0;
}
void PrintPerson(struct Person t){
	cout << " Person citizenship: " << t.citizenship << endl;
	cout << " Person age: " << t.age << endl;

}
void ChangeAge(struct Person t){
        t.age++;
}
