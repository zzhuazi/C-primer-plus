#include <iostream>
using namespace std;

void aa(int a);

int main()
{
	int u = 6;
	int * p;
	p = &u;

	cout << "Values: u=" << u << " *p:" << *p << endl;
	(*p)++;
	cout << "Values: u=" << u << " *p:" << *p << endl;

	int* pa = new int;
	*pa = 1200;
	cout << *pa << "  " << pa << "  " << &pa << "  " << *(&pa) << endl;
	delete pa;
	pa = &u;
	cout << *pa << "  " << pa;
	aa(6);

}
void aa(int a)
{
	int* p = new int[a];
}