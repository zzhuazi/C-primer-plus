/*
	要求使用嵌套循环的程序，要求用户输入一个值，指出要显示多少行，然后输出相应行数的星号。每一行包含的字符数等于用户指定的行数。
*/
#include <iostream>
int main() {
	using namespace std;
	cout << "Enter number of rows:";
	int rows;
	cin >> rows;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (j < rows - (i+1))
				cout << ".";
			else
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}