#include<iostream>
using namespace std;
double cube(double x);

int main()
{
	cout << cube(1.2);
	int a = 1;
	return 0;
}

double cube(double x) {
	return x * x * x;
}


