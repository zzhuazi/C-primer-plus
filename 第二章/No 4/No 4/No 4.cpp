#include<iostream>
using namespace std;
int month(int age);

int main()
{
	cout << "Enter your age:";
	int age;
	cin >> age;
	cout << age << " age has " << month(age) << " months.";
}

int month(int age)
{
	return age * 12;
}