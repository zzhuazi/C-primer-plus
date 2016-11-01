#include <iostream>
#include <array>
using namespace std;
int main() {
	array<int, 3> a;
	for (int i = 0; i < 3; i++) {
		cout << "Please input " << i + 1 << " times:";
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		cout << "The score of " << i + 1 << " times:" << a[i] << endl;
	}
}