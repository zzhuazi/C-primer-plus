/*
	使用array对象，和long double重新编写程序清单5.4，并计算100！的值
*/
#include <iostream>
#include <array>
using namespace std;
int main() {
	array<long double, 100> a;
	a[1] = a[0] = 1;
	for (int i = 2; i < 100; i++) {
		a[i] = i* a[i - 1];
	}
	cout << a[98] << endl << a[99];
}