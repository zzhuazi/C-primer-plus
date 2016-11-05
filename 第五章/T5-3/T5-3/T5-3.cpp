/*
	编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。当用户输入0时，程序结束
*/
#include <iostream>
int main() {
	using namespace std;
	int a, sum = 0;
	while (cin>>a && a!=0)
	{
		sum += a;
		cout << "By now sum: " << sum << endl;
	}
	cout << "Exit! And the sum is:" << sum << endl;
}