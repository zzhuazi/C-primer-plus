/*修改程序清单4.4 试用C++ String类*/
#include<iostream>
#include<string>
int main() {
	using namespace std;
	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:" << endl;
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << "." << endl;
}