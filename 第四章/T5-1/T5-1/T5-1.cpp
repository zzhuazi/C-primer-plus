#include<iostream>
int main() {
	using namespace std;
	cout << "Please input two int:";
	int first, second;
	cin >> first >> second;
	int sum = 0;
	for (int i = first;i <= second; ++i) {
		sum += i;
	}
	cout << first << " to " << second << " is: " << sum << endl;
}