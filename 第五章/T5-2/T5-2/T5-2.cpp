/*
	ʹ��array���󣬺�long double���±�д�����嵥5.4��������100����ֵ
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